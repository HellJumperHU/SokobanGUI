#pragma once
#ifndef Myform2_H
#define Myform2_H
#endif // DEBUG
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public: System::Windows::Forms::Form^ otherPage;
	public:
		MyForm1(void)
		{
		HomePage: System::Windows::Forms::Form^ home;
			otherPage = home;			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Back;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btn_mapload;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btn_fileopen;
	private: System::Windows::Forms::TextBox^ filecontent;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->Back = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_mapload = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_fileopen = (gcnew System::Windows::Forms::Button());
			this->filecontent = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Back
			// 
			this->Back->Location = System::Drawing::Point(12, 624);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(75, 23);
			this->Back->TabIndex = 0;
			this->Back->Text = L"Back";
			this->Back->UseVisualStyleBackColor = true;
			this->Back->Click += gcnew System::EventHandler(this, &MyForm1::Back_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(872, 624);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"980 , 600";
			// 
			// btn_mapload
			// 
			this->btn_mapload->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btn_mapload->Location = System::Drawing::Point(105, 624);
			this->btn_mapload->Name = L"btn_mapload";
			this->btn_mapload->Size = System::Drawing::Size(75, 23);
			this->btn_mapload->TabIndex = 3;
			this->btn_mapload->Text = L"Map load";
			this->btn_mapload->UseVisualStyleBackColor = true;
			this->btn_mapload->Click += gcnew System::EventHandler(this, &MyForm1::btn_mapload_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(631, 624);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(235, 72);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// btn_fileopen
			// 
			this->btn_fileopen->Location = System::Drawing::Point(197, 624);
			this->btn_fileopen->Name = L"btn_fileopen";
			this->btn_fileopen->Size = System::Drawing::Size(75, 23);
			this->btn_fileopen->TabIndex = 5;
			this->btn_fileopen->Text = L"OpenFile";
			this->btn_fileopen->UseVisualStyleBackColor = true;
			this->btn_fileopen->Click += gcnew System::EventHandler(this, &MyForm1::btn_fileopen_Click);
			// 
			// filecontent
			// 
			this->filecontent->Location = System::Drawing::Point(278, 624);
			this->filecontent->Multiline = true;
			this->filecontent->Name = L"filecontent";
			this->filecontent->Size = System::Drawing::Size(241, 119);
			this->filecontent->TabIndex = 6;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 761);
			this->Controls->Add(this->filecontent);
			this->Controls->Add(this->btn_fileopen);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_mapload);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Back);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) {
		otherPage->Show();
		this->Close();
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btn_mapload_Click(System::Object^ sender, System::EventArgs^ e) {
		// 980 , 600
		int avgwidth = 980 / 7;
		int avgheight = 600 / 5;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				PictureBox^ pcbox = gcnew PictureBox;
				Image^ wantediimage = gcnew Bitmap("sokoban_wall.png");
				pcbox->Image = wantediimage;
				pcbox->Anchor = System::Windows::Forms::AnchorStyles::None;
				pcbox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				pcbox->Size.Height = avgheight;
				pcbox->Size.Width = avgwidth;
				pcbox->Location = System::Drawing::Point(j*120,i*avgheight);
				//String^ CustomName = "P"+i;
				//CustomName = CustomName + j;
				//pcbox->Name = CustomName;			
				this->Controls->Add(pcbox);
				//pcbox->Size.Height = 40;
				//pcbox->Size.Width = 20;
				pcbox->Show();
			}

		}
	}
private: System::Void btn_fileopen_Click(System::Object^ sender, System::EventArgs^ e) {
	System::IO::Stream^ mystream;
	OpenFileDialog^ openfiledialog1 = gcnew OpenFileDialog;
	openfiledialog1->Filter = "txt files (*.txt)|*.txt|Sokoban map file (*.skb)|*.skb";


	if (openfiledialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((mystream = openfiledialog1->OpenFile()) != nullptr)
		{
			String^ strfilename = openfiledialog1->InitialDirectory + openfiledialog1->FileName;
			String^ Readfile = System::IO::File::ReadAllText(strfilename);
			//MessageBox::Show(strfilename);
			//MessageBox::Show(Readfile);
			filecontent->Text = Readfile;
			mystream->Close();
		}
	}
}
};
}
