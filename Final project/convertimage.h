#pragma once
using namespace System::Threading; //used to get the delay function working

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Finalproject {

	/// <summary>
	/// Summary for convertimage
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class convertimage : public System::Windows::Forms::Form
	{
	public:
		convertimage(void)
		{
			InitializeComponent();
			yesImage=0; //ADDED BY ME
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~convertimage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
		private:
		Image^ myi; //a handler to point to a loaded image. ADDED BY ME
		Bitmap^ grayScale;//a handler to point to a bitmap created from the loaded image
		int yesImage; //if yesImage is 1 then an image is already loaded and pointed by myi;ADDED BY ME
		int set;//record mouse position
		bool mousedown;//check if mouse is down
		bool expand;//condition to check if image is full size
		bool newstartpoint;//check if mousedrag stopped
		Point^ startingPoint;
		Point^ movingPoint;
		//pictureBox2 parameters
		bool expand2;//condition to check if image is full size
		bool newstartpoint2;//check if mousedrag stopped
		Point^ startingPoint2;
		Point^ movingPoint2;
		bool mousedown2;//check if mouse is down

	private: System::Windows::Forms::Button^  savebutton;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  grayscaleconvert;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  width;
	private: System::Windows::Forms::Button^  openimage;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::TextBox^  height;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RadioButton^  picboxoriginal;
	private: System::Windows::Forms::RadioButton^  fullsizeconverted;


	private: System::Windows::Forms::RadioButton^  picboxconverted;


	private: System::Windows::Forms::RadioButton^  fullsizeoriginal;
	private: System::Windows::Forms::Button^  closebutton;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->savebutton = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->grayscaleconvert = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->width = (gcnew System::Windows::Forms::TextBox());
			this->openimage = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->height = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->picboxoriginal = (gcnew System::Windows::Forms::RadioButton());
			this->fullsizeconverted = (gcnew System::Windows::Forms::RadioButton());
			this->picboxconverted = (gcnew System::Windows::Forms::RadioButton());
			this->fullsizeoriginal = (gcnew System::Windows::Forms::RadioButton());
			this->closebutton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// savebutton
			// 
			this->savebutton->Location = System::Drawing::Point(33, 191);
			this->savebutton->Name = L"savebutton";
			this->savebutton->Size = System::Drawing::Size(165, 56);
			this->savebutton->TabIndex = 12;
			this->savebutton->Text = L"SAVE CONVERTED IMAGE";
			this->savebutton->UseVisualStyleBackColor = true;
			this->savebutton->Click += gcnew System::EventHandler(this, &convertimage::savebutton_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->pictureBox2->Location = System::Drawing::Point(292, 386);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(611, 317);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &convertimage::pictureBox2_MouseMove);
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &convertimage::pictureBox2_MouseDown);
			this->pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &convertimage::pictureBox2_Paint);
			this->pictureBox2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &convertimage::pictureBox2_MouseUp);
			// 
			// grayscaleconvert
			// 
			this->grayscaleconvert->Location = System::Drawing::Point(33, 109);
			this->grayscaleconvert->Name = L"grayscaleconvert";
			this->grayscaleconvert->Size = System::Drawing::Size(165, 64);
			this->grayscaleconvert->TabIndex = 10;
			this->grayscaleconvert->Text = L"CONVERT TO GRAYSCALE";
			this->grayscaleconvert->UseVisualStyleBackColor = true;
			this->grayscaleconvert->Click += gcnew System::EventHandler(this, &convertimage::grayscaleconvert_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->pictureBox1->Location = System::Drawing::Point(292, 35);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(611, 317);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &convertimage::pictureBox1_MouseMove);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &convertimage::pictureBox1_MouseDown);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &convertimage::pictureBox1_Paint);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &convertimage::pictureBox1_MouseUp);
			// 
			// width
			// 
			this->width->Enabled = false;
			this->width->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->width->Location = System::Drawing::Point(119, 530);
			this->width->Name = L"width";
			this->width->Size = System::Drawing::Size(100, 23);
			this->width->TabIndex = 8;
			// 
			// openimage
			// 
			this->openimage->Location = System::Drawing::Point(33, 35);
			this->openimage->Name = L"openimage";
			this->openimage->Size = System::Drawing::Size(165, 52);
			this->openimage->TabIndex = 7;
			this->openimage->Text = L"OPEN IMAGE";
			this->openimage->UseVisualStyleBackColor = true;
			this->openimage->Click += gcnew System::EventHandler(this, &convertimage::openimage_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// height
			// 
			this->height->Enabled = false;
			this->height->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->height->Location = System::Drawing::Point(119, 566);
			this->height->Name = L"height";
			this->height->Size = System::Drawing::Size(100, 23);
			this->height->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 537);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Actual Image width";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 573);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Actual Image height";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(524, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(492, 370);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 18;
			// 
			// picboxoriginal
			// 
			this->picboxoriginal->AutoSize = true;
			this->picboxoriginal->Location = System::Drawing::Point(6, 19);
			this->picboxoriginal->Name = L"picboxoriginal";
			this->picboxoriginal->Size = System::Drawing::Size(233, 17);
			this->picboxoriginal->TabIndex = 19;
			this->picboxoriginal->TabStop = true;
			this->picboxoriginal->Text = L"VIEW ORIGINAL IMAGE IN PICTURE BOX";
			this->picboxoriginal->UseVisualStyleBackColor = true;
			this->picboxoriginal->Click += gcnew System::EventHandler(this, &convertimage::picboxoriginal_Click);
			// 
			// fullsizeconverted
			// 
			this->fullsizeconverted->AutoSize = true;
			this->fullsizeconverted->Location = System::Drawing::Point(0, 42);
			this->fullsizeconverted->Name = L"fullsizeconverted";
			this->fullsizeconverted->Size = System::Drawing::Size(216, 17);
			this->fullsizeconverted->TabIndex = 20;
			this->fullsizeconverted->TabStop = true;
			this->fullsizeconverted->Text = L"VIEW CONVERTED IMAGE FULL SIZE";
			this->fullsizeconverted->UseVisualStyleBackColor = true;
			this->fullsizeconverted->Click += gcnew System::EventHandler(this, &convertimage::fullsizeconverted_Click);
			// 
			// picboxconverted
			// 
			this->picboxconverted->AutoSize = true;
			this->picboxconverted->Location = System::Drawing::Point(0, 19);
			this->picboxconverted->Name = L"picboxconverted";
			this->picboxconverted->Size = System::Drawing::Size(249, 17);
			this->picboxconverted->TabIndex = 21;
			this->picboxconverted->TabStop = true;
			this->picboxconverted->Text = L"VIEW CONVERTED IMAGE IN PICTURE BOX";
			this->picboxconverted->UseVisualStyleBackColor = true;
			this->picboxconverted->Click += gcnew System::EventHandler(this, &convertimage::picboxconverted_Click);
			// 
			// fullsizeoriginal
			// 
			this->fullsizeoriginal->AutoSize = true;
			this->fullsizeoriginal->Location = System::Drawing::Point(6, 42);
			this->fullsizeoriginal->Name = L"fullsizeoriginal";
			this->fullsizeoriginal->Size = System::Drawing::Size(200, 17);
			this->fullsizeoriginal->TabIndex = 22;
			this->fullsizeoriginal->TabStop = true;
			this->fullsizeoriginal->Text = L"VIEW ORIGINAL IMAGE FULL SIZE";
			this->fullsizeoriginal->UseVisualStyleBackColor = true;
			this->fullsizeoriginal->Click += gcnew System::EventHandler(this, &convertimage::fullsizeoriginal_Click);
			// 
			// closebutton
			// 
			this->closebutton->Location = System::Drawing::Point(15, 621);
			this->closebutton->Name = L"closebutton";
			this->closebutton->Size = System::Drawing::Size(115, 47);
			this->closebutton->TabIndex = 23;
			this->closebutton->Text = L"EXIT";
			this->closebutton->UseVisualStyleBackColor = true;
			this->closebutton->Click += gcnew System::EventHandler(this, &convertimage::closebutton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->picboxoriginal);
			this->groupBox1->Controls->Add(this->fullsizeoriginal);
			this->groupBox1->Enabled = false;
			this->groupBox1->Location = System::Drawing::Point(12, 276);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(264, 76);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ORIGINAL IMAGE";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->fullsizeconverted);
			this->groupBox2->Controls->Add(this->picboxconverted);
			this->groupBox2->Enabled = false;
			this->groupBox2->Location = System::Drawing::Point(15, 370);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(261, 76);
			this->groupBox2->TabIndex = 25;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"CONVERTED IMAGE";
			// 
			// convertimage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(936, 745);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->closebutton);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->height);
			this->Controls->Add(this->savebutton);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->grayscaleconvert);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->width);
			this->Controls->Add(this->openimage);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Name = L"convertimage";
			this->Text = L"convertimage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openimage_Click(System::Object^  sender, System::EventArgs^  e) {
				 //IF STATEMENT TO OPEN IMAGE FROM COMPUTER AND DISPLAY IN PICTUREBOX
				 try{//exception handler
				 if(openFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK) 
				 { 
					 //initialise open image as myi
					 myi=Image::FromFile(openFileDialog1->FileName); 
					 width->Text=Convert::ToString(myi->Width); 
					 height->Text=Convert::ToString(myi->Height);
					 //create graphics type
					 Graphics^ pg1=pictureBox1->CreateGraphics(); 
					 //draw image to fit size of picture box
					 pg1->DrawImage(myi,0,0,pictureBox1-> 
						 Size.Width,pictureBox1->Size.Height); 
					 yesImage=1; //set to 1 image is already loaded. 
					 expand = false;//set condition as false
					 this->label4->Text = L"ORIGINAL IMAGE";
					 this->groupBox1->Enabled = true;
				 }
				 }
				 catch(...)
				 {
					 //display if error is encountered
					 MessageBox::Show("No image picked!!");
				 }
			 }
private: System::Void grayscaleconvert_Click(System::Object^  sender, System::EventArgs^  e) {
			 //convert the image to grayscale
			  try
			 {
			 //Get the image from our PictureBox
			 grayScale = gcnew Bitmap(myi);//convert to bitmap called grayScale (initialised publicly)
			 //Store the height/width of the image
			 int height = grayScale->Height;
			 int width = grayScale->Width;
			 //Loop through both the Y (vertical) and X (horizontal)
			 // coordinates of the image.
			 for (int yCoordinate = 0; yCoordinate < height; yCoordinate++)
			 {
				 for (int xCoordinate = 0; xCoordinate < width; xCoordinate++)
				 {
					 //Get the pixel that's at our current coordinate.
					 Color c = grayScale->GetPixel(xCoordinate, yCoordinate);
					 float f;//temperature
					 float r;//color ratio
					 //STATEMENTS TO CHECK COLOUR OF PIXEL
					 if (c.R >= 240 && c.G >= 240 && c.B >=240){
						 f = 3e2;}
					 else if (c.R>=100 && c.G>=80 &&c.B >= 100) //between white and blue
						 f = 1.2e3; //arbitrary temperature
					 else{
						 if (c.B >= 240)
						 {
							 if (c.G <= 70)
								 f = 2.2e3;
							 if (c.G > 70 && c.G <= 255)
								 f = 4.1e3;
						 }
						 if (c.B < 240 && c.B > 135)
						 {
							 if (c.G > 135 && c.G < 180)
								 f = 6e3;
							 if (c.G > 180 && c.G < 200)
								 f = 7.9e3;
							 if (c.G >= 200)
								 f = 9.8e3;
						 }
						 if (c.B <= 135)
						 {
							 if (c.G < 235 && c.R < 30)
								 f = 1.2e4;
							 if (c.G >= 235 && c.R <= 30)
								 f = 1.4e4;
							 if (c.R > 30 && c.R <= 235)
								 f = 1.6e4;
							 if (c.R > 235)
							 {
								 if (c.G > 235)
									 f = 1.7e4;
								 if (c.G >= 200 && c.G <=235)
									 f = 1.9e4;
								 if (c.G < 200 && c.G >160)
									 f = 2.1e4;
								 if (c.G <= 160 && c.G >= 120)
									 f = 2.3e4;
								 if (c.G < 120 && c.G > 90)
									 f = 2.5e4;
								 if (c.G <= 90)
									 f = 2.7e4;
							 }
						 }
					 }
					 r = (f/2.7e4) * 255;
					 //Set the pixel to the new gray color.
					 grayScale->SetPixel(xCoordinate, yCoordinate, c.FromArgb(r, r, r));					
				 }
			 }
			 //Set the modified PictureBox to our new image.
			 Graphics^ pg2=pictureBox2->CreateGraphics(); 
					 pg2->DrawImage(grayScale,0,0,pictureBox2-> 
						 Size.Width,pictureBox1->Size.Height); //draw image to fit size of picture box
					 yesImage = 2;//condition to show that converted image is in pictureBox2
					 this->groupBox2->Enabled = true;
						 this->label5->Text = L"CONVERTED GRAYSCALE IMAGE";
		 }
		  catch(...)//error handling tool
			 {
				 MessageBox::Show("No image to convert!!");
			 }
		 }
private: System::Void savebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 //save image
			  if (yesImage == 2)
			 {
				 saveFileDialog1->Filter = "Bitmap Image|*.bmp";
				 saveFileDialog1->Title = "Save converted image";
				 if(saveFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK) 
				 {
					 //get file to be saved from stream
					 System::IO::FileStream^ fs = 
						 (System::IO::FileStream^)saveFileDialog1->OpenFile();
					 this->grayScale->Save(fs,
						 System::Drawing::Imaging::ImageFormat::Bmp);//save file
					 fs->Close();//close file stream
				 }
			 }
			 else
				 MessageBox::Show("No image to save!!");
		 }
private: System::Void closebutton_Click(System::Object^  sender, System::EventArgs^  e) {
			 //close form
			 convertimage::Close();
		 }
private: System::Void picboxoriginal_Click(System::Object^  sender, System::EventArgs^  e) {
			 //fit original image to picturebox
			 if (yesImage == 1 || yesImage == 2) //check if image is present
			 {
			 Graphics^ pg1=pictureBox1->CreateGraphics(); 
			 pg1->DrawImage(myi,0,0,pictureBox1-> 
				 Size.Width,pictureBox1->Size.Height); //draw image to fit size of picture box
			 expand = false;
			 }
			 else
				 MessageBox::Show("No image is open!!");
		 }
private: System::Void fullsizeoriginal_Click(System::Object^  sender, System::EventArgs^  e) {
			 //draw full sized image for original
			 if (yesImage == 1 || yesImage == 2) //check if image is present
			 {
				 Graphics^ pg2=pictureBox1->CreateGraphics(); 
				 pg2->DrawImage(myi,0,0,myi->Width,myi->Height);
				 newstartpoint = false;
				 expand = true;
			 }
			 else
				 MessageBox::Show("No image is open!!");
		 }
private: System::Void picboxconverted_Click(System::Object^  sender, System::EventArgs^  e) {
			 //fit converted image to picturebox
			 if (yesImage == 2) //check if image is present
			 {
			 Graphics^ pg2=pictureBox2->CreateGraphics(); 
			 pg2->DrawImage(grayScale,0,0,pictureBox2-> 
				 Size.Width,pictureBox2->Size.Height);
			 expand2 = false;
			 }
			 else
				 MessageBox::Show("No image is open!!");
		 }
private: System::Void fullsizeconverted_Click(System::Object^  sender, System::EventArgs^  e) {
			 //draw full sized image for converted
			  if (yesImage == 2) //check if image is present
			 {
				 Graphics^ pg2=pictureBox2->CreateGraphics(); 
				 pg2->DrawImage(grayScale,0,0,myi->Width,myi->Height);
				 newstartpoint2 = false;
				 expand2 = true;
			 }
			 else
				 MessageBox::Show("No image is open!!");
		 }
private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {	
			 //when mouse is down (clicked)
			 if (newstartpoint)//check if mouse has been dragged before
				 //set old endpoint to new starpoint
				 startingPoint = movingPoint;
			 else
			 {
				 //set initial mousepoints to 0
			 startingPoint = Point::Empty;
			  movingPoint = Point::Empty;
			 }
			  if (e->Button == System::Windows::Forms::MouseButtons::Left)
				  //left mouse click occurs
			  {
				  startingPoint =  Point(e->X - movingPoint->X,
                            e->Y - movingPoint->Y);
				  mousedown = true;
			  }
			 
		 }
private: System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 //mouse is no longer clicked
			 mousedown = false;
		 }
private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 //user is dragging mouse
			 if (mousedown && expand)
				 //if mouse is down and picture is fully sized
			 {
				movingPoint =  Point(e->X - startingPoint->X, 
                            e->Y - startingPoint->Y);
				//check if user has dragged image out of bounds and disable drag event if so
				if (-movingPoint->X >= abs(myi->Width - pictureBox1->Width + 70)
					|| -movingPoint->Y >= abs(myi->Height - pictureBox1->Height + 70)){
						movingPoint = Point(movingPoint->X/1.1,movingPoint->Y/1.1);
						mousedown = false;
					}
				else if (movingPoint->X >= 70 || movingPoint->Y >= 70){
					movingPoint = Point(movingPoint->X/1.1,movingPoint->Y/1.1);
					mousedown = false;
				}
				else
					pictureBox1->Invalidate();//allows re-drawing within picture box
				newstartpoint = true;
			 }
		 }
private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 //event handler to draw image with mouse movement
			 if (yesImage !=0 && mousedown)
			 {
				 //clear the picturebox and replace with coloured background
				 e->Graphics->Clear(Color::BlanchedAlmond);
				 //re-draw the image 
				 e->Graphics->DrawImage(myi, movingPoint->X,movingPoint->Y);
			 }
		 }
private: System::Void pictureBox2_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 //event when mouse is down (clicked)
			  if (newstartpoint2) //check if mouse has been dragged before
				 //set old endpoint to new starpoint
				 startingPoint2 = movingPoint2;
			 else
			 {
				 //set initial mousepoints to 0
			 startingPoint2 = Point::Empty;
			  movingPoint2 = Point::Empty;
			 }
			  if (e->Button == System::Windows::Forms::MouseButtons::Left)
				  //left mouse click occurs
			  {
				  startingPoint2 =  Point(e->X - movingPoint2->X,
                            e->Y - movingPoint2->Y);
				  mousedown2 = true;
			  }			 
		 }
private: System::Void pictureBox2_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 //mouse has been let go by the user
			 mousedown2 = false;
		 }
private: System::Void pictureBox2_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 //mouse is being dragged by user
			 if (mousedown2 && expand2) 
				 //if mouse is down and picture is fully sized
			 {
				movingPoint2 =  Point(e->X - startingPoint2->X, 
                            e->Y - startingPoint2->Y);
				//check if user has dragged image out of bounds and disable drag event if so
				if (-movingPoint2->X >= abs(grayScale->Width - pictureBox2->Width + 70)
					|| -movingPoint2->Y >= abs(grayScale->Height - pictureBox2->Height + 70)){
						movingPoint2 = Point(movingPoint2->X/1.1,movingPoint2->Y/1.1);
						mousedown2 = false;
					}
				else if (movingPoint2->X >= 70 || movingPoint2->Y >= 70){
					movingPoint2 = Point(movingPoint2->X/1.1,movingPoint2->Y/1.1);
					mousedown2 = false;
				}
				else
					pictureBox2->Invalidate();//allows re-drawing within picture box
				newstartpoint2 = true;
			 }
		 }
private: System::Void pictureBox2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 //event handler to draw image with mouse movement
			 if (yesImage !=0 && mousedown2)
			 {
				 //clear the picturebox and replace with coloured background
				 e->Graphics->Clear(Color::BlanchedAlmond);
				 //re-draw the image
				 e->Graphics->DrawImage(grayScale, movingPoint2->X,movingPoint2->Y);
			 }
		 }
};
}
