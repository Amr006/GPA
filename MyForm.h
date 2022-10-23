#pragma once

namespace amr {

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ counter_label;

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Enter_button;

	private: System::Windows::Forms::TextBox^ hours_textbox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ gpa_textbox;
	private: System::Windows::Forms::TextBox^ nosemes_textbox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nosemes_textbox = (gcnew System::Windows::Forms::TextBox());
			this->Enter_button = (gcnew System::Windows::Forms::Button());
			this->hours_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->gpa_textbox = (gcnew System::Windows::Forms::TextBox());
			this->counter_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->nosemes_textbox);
			this->panel1->Controls->Add(this->Enter_button);
			this->panel1->Controls->Add(this->hours_textbox);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->gpa_textbox);
			this->panel1->Controls->Add(this->counter_label);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-8, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1222, 620);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkRed;
			this->label2->Location = System::Drawing::Point(427, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 32);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Semester : ";
			// 
			// nosemes_textbox
			// 
			this->nosemes_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nosemes_textbox->Location = System::Drawing::Point(790, 22);
			this->nosemes_textbox->Name = L"nosemes_textbox";
			this->nosemes_textbox->Size = System::Drawing::Size(95, 49);
			this->nosemes_textbox->TabIndex = 7;
			// 
			// Enter_button
			// 
			this->Enter_button->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Enter_button->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->Enter_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Enter_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enter_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Enter_button.Image")));
			this->Enter_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Enter_button->Location = System::Drawing::Point(549, 427);
			this->Enter_button->Name = L"Enter_button";
			this->Enter_button->Size = System::Drawing::Size(197, 66);
			this->Enter_button->TabIndex = 6;
			this->Enter_button->Text = L"     Enter";
			this->Enter_button->UseVisualStyleBackColor = false;
			this->Enter_button->Click += gcnew System::EventHandler(this, &MyForm::Enter_button_Click);
			// 
			// hours_textbox
			// 
			this->hours_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hours_textbox->Location = System::Drawing::Point(790, 218);
			this->hours_textbox->Name = L"hours_textbox";
			this->hours_textbox->Size = System::Drawing::Size(151, 49);
			this->hours_textbox->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(245, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 46);
			this->label4->TabIndex = 4;
			this->label4->Text = L"GPA :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(603, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 46);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Hours :";
			// 
			// gpa_textbox
			// 
			this->gpa_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gpa_textbox->Location = System::Drawing::Point(408, 217);
			this->gpa_textbox->Name = L"gpa_textbox";
			this->gpa_textbox->Size = System::Drawing::Size(151, 49);
			this->gpa_textbox->TabIndex = 2;
			// 
			// counter_label
			// 
			this->counter_label->AutoSize = true;
			this->counter_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->counter_label->ForeColor = System::Drawing::Color::DarkRed;
			this->counter_label->Location = System::Drawing::Point(630, 85);
			this->counter_label->Name = L"counter_label";
			this->counter_label->Size = System::Drawing::Size(47, 51);
			this->counter_label->TabIndex = 1;
			this->counter_label->Text = L"1";
			this->counter_label->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(330, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(433, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Number of semesters : ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(1006, 185);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(124, 105);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(77, 185);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(124, 105);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1208, 612);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"GPA Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   int cn = 1 ;
		   float gpa = 0, temp = 0;
	private: System::Void Enter_button_Click(System::Object^ sender, System::EventArgs^ e) {

		if (nosemes_textbox->Text == "" || gpa_textbox->Text == "" || hours_textbox->Text == "")
		{
			MessageBox::Show(" Please enter a value into all boxes");
		}
		else
		{
			int n = System::Convert::ToInt16(nosemes_textbox->Text);
			float g = (float)System::Convert::ToDouble(gpa_textbox->Text);
			float h = (float)System::Convert::ToDouble(hours_textbox->Text);

			gpa += (g * h);
			
			temp += h;

			if (cn >= n)
			{
				gpa /= temp;
				MessageBox::Show("your GPA : " + gpa );
				cn = 0;
				gpa = 0;
				temp = 0;
				nosemes_textbox->Clear();
				gpa_textbox->Clear();
				hours_textbox->Clear();
			}
			gpa_textbox->Clear();
			hours_textbox->Clear();


			cn++;

			counter_label->Text = System::Convert::ToString(cn);




		}

	}
};
}
