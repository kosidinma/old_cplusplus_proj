#pragma once
#include "Quadeqn.h"
#include "convertimage.h"

namespace Finalproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Quadriatic_eqn;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  exitapp;
	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->Quadriatic_eqn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->exitapp = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Quadriatic_eqn
			// 
			this->Quadriatic_eqn->Location = System::Drawing::Point(253, 50);
			this->Quadriatic_eqn->Name = L"Quadriatic_eqn";
			this->Quadriatic_eqn->Size = System::Drawing::Size(318, 55);
			this->Quadriatic_eqn->TabIndex = 0;
			this->Quadriatic_eqn->Text = L"Part 1 - Quadriatic Equation";
			this->Quadriatic_eqn->UseVisualStyleBackColor = true;
			this->Quadriatic_eqn->Click += gcnew System::EventHandler(this, &Form1::Quadriatic_eqn_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(253, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(318, 62);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Part 2 - Convert Image to Grayscale";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(227, 222);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(369, 225);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// exitapp
			// 
			this->exitapp->Location = System::Drawing::Point(713, 366);
			this->exitapp->Name = L"exitapp";
			this->exitapp->Size = System::Drawing::Size(95, 36);
			this->exitapp->TabIndex = 3;
			this->exitapp->Text = L"EXIT";
			this->exitapp->UseVisualStyleBackColor = true;
			this->exitapp->Click += gcnew System::EventHandler(this, &Form1::exitapp_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(833, 459);
			this->Controls->Add(this->exitapp);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Quadriatic_eqn);
			this->Name = L"Form1";
			this->Text = L"ELEC362_Onyenso_200747518_Specification1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Quadriatic_eqn_Click(System::Object^  sender, System::EventArgs^  e) {
				 //open new dialog
				 Quadeqn^ dbl=gcnew Quadeqn(); 
				 dbl->ShowDialog(); 
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //open new dialog
				 convertimage^ dbl=gcnew convertimage(); 
				 dbl->ShowDialog(); 
			 }
	private: System::Void exitapp_Click(System::Object^  sender, System::EventArgs^  e) {
				 //exit application
				 Application::Exit();
			 }
};
}

