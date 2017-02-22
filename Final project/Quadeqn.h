#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Finalproject {

	/// <summary>
	/// Summary for Quadeqn
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Quadeqn : public System::Windows::Forms::Form
	{
	public:
		Quadeqn(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Quadeqn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label15;
	protected: 
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  close;
	private: System::Windows::Forms::TextBox^  b;
	private: System::Windows::Forms::TextBox^  c;
	private: System::Windows::Forms::TextBox^  x1r;
	private: System::Windows::Forms::TextBox^  x2r;
	private: System::Windows::Forms::TextBox^  x1i;
	private: System::Windows::Forms::TextBox^  x2i;
	private: System::Windows::Forms::TextBox^  type;
	private: System::Windows::Forms::TextBox^  a;
	private: System::Windows::Forms::Button^  clear;
	private: System::Windows::Forms::Button^  solve;

	protected: 


























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
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->close = (gcnew System::Windows::Forms::Button());
			this->b = (gcnew System::Windows::Forms::TextBox());
			this->c = (gcnew System::Windows::Forms::TextBox());
			this->x1r = (gcnew System::Windows::Forms::TextBox());
			this->x2r = (gcnew System::Windows::Forms::TextBox());
			this->x1i = (gcnew System::Windows::Forms::TextBox());
			this->x2i = (gcnew System::Windows::Forms::TextBox());
			this->type = (gcnew System::Windows::Forms::TextBox());
			this->a = (gcnew System::Windows::Forms::TextBox());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->solve = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(389, 29);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(13, 13);
			this->label15->TabIndex = 51;
			this->label15->Text = L"+";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(139, 10);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(14, 13);
			this->label14->TabIndex = 50;
			this->label14->Text = L"A";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(434, 10);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(14, 13);
			this->label13->TabIndex = 49;
			this->label13->Text = L"C";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(121, 192);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 13);
			this->label12->TabIndex = 48;
			this->label12->Text = L"X2 = ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(366, 146);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 47;
			this->label11->Text = L"+";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(600, 188);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(12, 20);
			this->label10->TabIndex = 46;
			this->label10->Text = L"i";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(244, 29);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 45;
			this->label9->Text = L"+";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(369, 29);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 13);
			this->label8->TabIndex = 44;
			this->label8->Text = L"X";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(296, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 13);
			this->label7->TabIndex = 43;
			this->label7->Text = L"B";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(120, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 42;
			this->label6->Text = L"X1 = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(366, 192);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 41;
			this->label5->Text = L"+";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(600, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(12, 20);
			this->label4->TabIndex = 40;
			this->label4->Text = L"i";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(217, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 17);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Real Part";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(434, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 17);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Imaginary Part";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(217, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"X^2";
			// 
			// close
			// 
			this->close->Location = System::Drawing::Point(533, 270);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(100, 45);
			this->close->TabIndex = 36;
			this->close->Text = L"EXIT";
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &Quadeqn::close_Click);
			// 
			// b
			// 
			this->b->Location = System::Drawing::Point(263, 26);
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(100, 20);
			this->b->TabIndex = 35;
			// 
			// c
			// 
			this->c->Location = System::Drawing::Point(408, 26);
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(100, 20);
			this->c->TabIndex = 34;
			// 
			// x1r
			// 
			this->x1r->Enabled = false;
			this->x1r->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->x1r->Location = System::Drawing::Point(158, 143);
			this->x1r->Name = L"x1r";
			this->x1r->Size = System::Drawing::Size(202, 20);
			this->x1r->TabIndex = 33;
			// 
			// x2r
			// 
			this->x2r->Enabled = false;
			this->x2r->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->x2r->Location = System::Drawing::Point(158, 189);
			this->x2r->Name = L"x2r";
			this->x2r->Size = System::Drawing::Size(202, 20);
			this->x2r->TabIndex = 32;
			// 
			// x1i
			// 
			this->x1i->Enabled = false;
			this->x1i->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->x1i->Location = System::Drawing::Point(385, 143);
			this->x1i->Name = L"x1i";
			this->x1i->Size = System::Drawing::Size(209, 20);
			this->x1i->TabIndex = 31;
			// 
			// x2i
			// 
			this->x2i->Enabled = false;
			this->x2i->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->x2i->Location = System::Drawing::Point(385, 189);
			this->x2i->Name = L"x2i";
			this->x2i->Size = System::Drawing::Size(209, 20);
			this->x2i->TabIndex = 30;
			// 
			// type
			// 
			this->type->Enabled = false;
			this->type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->type->Location = System::Drawing::Point(63, 237);
			this->type->Multiline = true;
			this->type->Name = L"type";
			this->type->Size = System::Drawing::Size(426, 96);
			this->type->TabIndex = 29;
			// 
			// a
			// 
			this->a->Location = System::Drawing::Point(111, 26);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(100, 20);
			this->a->TabIndex = 28;
			// 
			// clear
			// 
			this->clear->Location = System::Drawing::Point(395, 74);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(75, 23);
			this->clear->TabIndex = 27;
			this->clear->Text = L"Clear";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &Quadeqn::clear_Click);
			// 
			// solve
			// 
			this->solve->Location = System::Drawing::Point(247, 74);
			this->solve->Name = L"solve";
			this->solve->Size = System::Drawing::Size(75, 23);
			this->solve->TabIndex = 26;
			this->solve->Text = L"Solve";
			this->solve->UseVisualStyleBackColor = true;
			this->solve->Click += gcnew System::EventHandler(this, &Quadeqn::solve_Click);
			// 
			// Quadeqn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 343);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->close);
			this->Controls->Add(this->b);
			this->Controls->Add(this->c);
			this->Controls->Add(this->x1r);
			this->Controls->Add(this->x2r);
			this->Controls->Add(this->x1i);
			this->Controls->Add(this->x2i);
			this->Controls->Add(this->type);
			this->Controls->Add(this->a);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->solve);
			this->Name = L"Quadeqn";
			this->Text = L"Quadeqn";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void close_Click(System::Object^  sender, System::EventArgs^  e) {
			 //close form
			 Quadeqn::Close();
		 }
private: System::Void solve_Click(System::Object^  sender, System::EventArgs^  e) {
			 //solve equation roots and display solutions
			 double a,b,c,d,root1,root2;
			 try //exception handler
			 {
				 //convert textbox inputs to double
				 a = System::Convert::ToDouble(this->a->Text);
				 b = System::Convert::ToDouble(this->b->Text);
				 c = System::Convert::ToDouble(this->c->Text);
				 d = (b*b)-(4*a*c);//calculate discriminant
				 if (a == 0 && b == 0)//check condition
				 {
					 this->type->Text = L"The equation is extremely degenerate";
					 this->x1r->Text = L"infinity";
					 this->x1i->Text = L"0";
					 this->x2r->Text = L"infinity";
					 this->x2i->Text = L"0";
				 }
				 else if (a==0)//check for linearity
				 {
					 this->type->Text = L"The equation is degenerate with one real solution";
					 root1 = -c/b;
					 root2 = 0;
					 this->x1r->Text = System::Convert::ToString(root1);
					 this->x1i->Text = L"0";
					 this->x2r->Text = System::Convert::ToString(root2);
					 this->x2i->Text = L"0";
				 }
				 else if (d>0)//check for real roots
				 {
					 this->type->Text = L"Real roots";
					 root1 = (-b+sqrt(d))/(2*a);
					 root2 = (-b-sqrt(d))/(2*a);
					 this->x1r->Text = System::Convert::ToString(root1);
					 this->x1i->Text = L"0";
					 this->x2r->Text = System::Convert::ToString(root2);
					 this->x2i->Text = L"0";
				 }

				 else if (d<0)//check for complex roots
				 {
					 this->type->Text = L"Complex roots";
					 root1 = sqrt(fabs(d))/(2*a);
					 root2 = -sqrt(fabs(d))/(2*a);
					 this->x1r->Text = System::Convert::ToString(-b/(2*a));
					 this->x1i->Text = System::Convert::ToString(root1);
					 this->x2r->Text = System::Convert::ToString(-b/(2*a));
					 this->x2i->Text = System::Convert::ToString(root2);
				 }
				 else if (d==0)//check for repeated roots
				 {
					 this->type->Text = L"Identical(multiple) real roots";
					 root1 = -b/(2*a);
					 root2 = -b/(2*a);
					 this->x1r->Text = System::Convert::ToString(root1);
					 this->x1i->Text = L"0";
					 this->x2r->Text = System::Convert::ToString(root2);
					 this->x2i->Text = L"0";
				 }
			 }
			 catch(...)
			 {
				 //display in case of exceptions
				 MessageBox::Show("Please input a number!");
			 }
		 }
private: System::Void clear_Click(System::Object^  sender, System::EventArgs^  e) {
			 //clear textboxes
			 this->a->Text = L" ";
			 this->b->Text = L" ";
			 this->c->Text = L" ";
			 this->x1r->Text = L" ";
			 this->x1i->Text = L" ";
			 this->x2r->Text = L" ";
			 this->x2i->Text = L" ";
			 this->type->Text = L" ";
		 }
};
}
