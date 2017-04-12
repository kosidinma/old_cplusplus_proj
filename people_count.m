clear all
clc
%Detect objects using Viola-Jones Algorithm
%To detect Face
FDetect = vision.CascadeObjectDetector;
cam = webcam(1);
cam.resolution = '640x480';
resol = strrep(cam.resolution,'x',' '); %change to character with only resolution values..replace thex with a space
resol = str2num(resol); %convert to an array of numbers and get the x and y 
resol_x = resol(1);
resol_y = resol(2);
past_feature_img = zeros(20,20,10); %get initial feature image by making a grayscale array...20 is size, 10 is max expected number of people entering at once
feature_img =  zeros(20,20,10);
reset_img =  zeros(20,20,10);
reset_img2 =  zeros(20,20,10) + 250; %almost white
head_count = 0;
no_face_frame_count = 0; %count number of frame without face
%preview(cam); %open cam preview
%------------resize---- 
%[m,n,~] = size(Image);
%Image2 = imresize(Image2,[m n]);
%-----------------------------
while(1)
img = snapshot(cam); %get current image
BB = step(FDetect,img);%Returns Bounding Box values based on number of detected faces
if head_count == 0
head_count = size(BB,1);
end
if (size(BB,1)) > 0 %if face is detected
no_face_frame_count = 0; %face detected, reset count
BB2 = BB;
for i = 1:size(BB,1)
head_length = BB(i,4 );%get head length
if (BB(i,2)+ head_length * 1.75) < resol_y  %if image not out of bounds
BB2(i,2) = BB(i,2) + (head_length * 1.75); %get pixels right under neck
end
end

for i = 1:size(BB2,1)
f_img = imcrop(img,BB2(i,:)); %%CHANGE TO "BB2" AFTER TESTING
f_img = imresize(f_img,[20 20]); 
feature_img(:,:,i) = rgb2gray(f_img);
end

%----------compare features--------------------------
feat_non_zero = 0;
past_non_zero = 0;

for v = 1:10 %find no of non-zero feature images
if (mean2(feature_img(:,:,v))~= 0) 
feat_non_zero = feat_non_zero + 1; 
end
end

for v = 1:10 %find no of non-zero past images
if (mean2(past_feature_img(:,:,v))~= 0) 
past_non_zero = past_non_zero + 1;
end
end

%loop to compare proper
%img_dif = imabsdiff(A,B); %check the image difference 
%mean of image intensity = mean2(myimage);
for r = 1:feat_non_zero
for g = 1:past_non_zero
u = abs(mean2(feature_img(:,:,r)) - mean2(past_feature_img(:,:,g)))
if abs(mean2(feature_img(:,:,r)) - mean2(past_feature_img(:,:,g))) <= 10 %check pixel intensity difference if low..value can be changed..affected by light
break; %break loop if low as match has been found
else
if g == past_non_zero
head_count = head_count + 1; %no feature matched with this therefore it is new
end
end
end
end
past_feature_img = feature_img; %copy contents from one array to the other..set image as past
feature_img = reset_img; %reset the future image array for new input

else %what to do if no face is detected in 30 frames
no_face_frame_count = no_face_frame_count + 1;
if no_face_frame_count == 30 %can be changed depending on camera frequency
past_feature_img = reset_img2; %bright condition
no_face_frame_count = 0;
end
end
%--------show image-----------------------------
imshow(img);
hold on
for i = 1:size(BB,1)
    rectangle('Position',BB(i,:),'LineWidth',2,'LineStyle','-','EdgeColor','r');
    rectangle('Position',BB2(i,:),'LineWidth',2,'LineStyle','-','EdgeColor','b');
end
str = sprintf('Face Detection; Head Count = %d', head_count); %title string
title(str);
hold off;
%-------------------------------------------------

%closePreview(cam); %close campreview
%clear('cam'); %close webcam
end