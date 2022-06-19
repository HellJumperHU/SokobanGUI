#pragma once
#ifndef Myform_H
#define Myform_H
//.....
//original header file contents here
#include "MyForm1.h"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
//.....
#endif

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_inputFile;
	protected:

	private: System::Windows::Forms::Button^ btn_inputRawtext;
	private: System::Windows::Forms::Button^ btn_close;
	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ pictureboxName;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_inputFile = (gcnew System::Windows::Forms::Button());
			this->btn_inputRawtext = (gcnew System::Windows::Forms::Button());
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureboxName = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_inputFile
			// 
			this->btn_inputFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_inputFile->Location = System::Drawing::Point(380, 277);
			this->btn_inputFile->Name = L"btn_inputFile";
			this->btn_inputFile->Size = System::Drawing::Size(210, 37);
			this->btn_inputFile->TabIndex = 1;
			this->btn_inputFile->Text = L"Sokoban from file";
			this->btn_inputFile->UseVisualStyleBackColor = true;
			this->btn_inputFile->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btn_inputRawtext
			// 
			this->btn_inputRawtext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_inputRawtext->Location = System::Drawing::Point(380, 446);
			this->btn_inputRawtext->Name = L"btn_inputRawtext";
			this->btn_inputRawtext->Size = System::Drawing::Size(210, 37);
			this->btn_inputRawtext->TabIndex = 2;
			this->btn_inputRawtext->Text = L"Sokoban as raw text";
			this->btn_inputRawtext->UseVisualStyleBackColor = true;
			this->btn_inputRawtext->Click += gcnew System::EventHandler(this, &MyForm::btn_inputRawtext_Click);
			// 
			// btn_close
			// 
			this->btn_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_close->Location = System::Drawing::Point(391, 696);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(210, 37);
			this->btn_close->TabIndex = 3;
			this->btn_close->Text = L"Exit";
			this->btn_close->UseVisualStyleBackColor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Brown;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(345, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(278, 26);
			this->label1->TabIndex = 4;
			this->label1->Text = L"S O K O B A N   S O L V E R";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(986, 763);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// pictureboxName
			// 
			this->pictureboxName->Location = System::Drawing::Point(330, 593);
			this->pictureboxName->Name = L"pictureboxName";
			this->pictureboxName->Size = System::Drawing::Size(333, 20);
			this->pictureboxName->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(984, 761);
			this->Controls->Add(this->pictureboxName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->btn_inputRawtext);
			this->Controls->Add(this->btn_inputFile);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MainMenu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
			this->pictureboxName->Text = this->pictureBox1->Name;

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ form11 = gcnew MyForm1();
		form11->otherPage = this;
		form11->Show();
		this->Hide();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Close();
		int^ szam = 1;
		String^ namee = "picture" + szam;
		this->pictureBox1->Name = namee;
		this->pictureboxName->Text = this->pictureBox1->Name;
	}


	private: System::Void btn_inputRawtext_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ form1 = gcnew MyForm1();
		form1->otherPage = this;
		form1->Show();
		this->Hide();
	}
};
}