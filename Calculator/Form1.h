#pragma once
#include "string2.h"

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;

	private: System::ComponentModel::IContainer^  components;





	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(241, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Multiply";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1350, 43);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 81);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(1350, 55);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 223);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(1350, 50);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 279);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(466, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Power";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(576, 152);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Fib";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(142, 151);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Difference";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(682, 152);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Factorial";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(549, 315);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 9;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(34, 151);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Sum";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(357, 152);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Division";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(34, 189);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 12;
			this->button9->Text = L"Pi";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(142, 188);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 13;
			this->button10->Text = L"Exponenta";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(241, 188);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 14;
			this->button11->Text = L"SqRoot";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(783, 407);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	
	
	
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 vlongfloat f,f2;
			 f=strtolf(textBox1->Text);
			 f2=strtolf(textBox2->Text);
			 f=f*f2;
			 textBox3->Text=f.tostring();
			 textBox4->Text=textBox3->Text->Length.ToString();
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 vlongfloat f,f2;
				 f=strtolf(textBox1->Text);
				 f2=strtolf(textBox2->Text);
				 f=Power(f,f2);
				 textBox3->Text=f.tostring();

			 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			    int i=Convert::ToInt32(textBox1->Text);
				textBox3->Text=vlonginttostr(Fib(i));
				
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 vlongfloat f,f2;
				 f=strtolf(textBox1->Text);
				 f2=strtolf(textBox2->Text);
				 f=Dif(f,f2);
				 textBox3->Text=f.tostring();
		 }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 vlongint v,v2,v3;
				 v=strtovlongint(textBox1->Text);
				 int i=Convert::ToInt32(textBox2->Text);
				 for(int j=1;j<=i;j++){v=Multiint(v,j);}
				 textBox3->Text=vlonginttostr(v);
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {	 
				 vlongfloat f,f2;
				 f=strtolf(textBox1->Text);
				 textBox3->Text=div1(f).tostring();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 vlongfloat f,f2;
				 f=strtolf(textBox1->Text);
				 f2=strtolf(textBox2->Text);
				 f=f+f2;
				 textBox3->Text=f.tostring();
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				 vlongfloat f,f2;
				 f=strtolf(textBox1->Text);
				 f2=strtolf(textBox2->Text);
				 f=f/f2;
				 //f.t=Multiint(f.t,2);
				 textBox3->Text=f.tostring();
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
				 vlongfloat f,f2;
				 vlongint t,t1;
				 f=Pi(Convert::ToInt32(textBox1->Text));
				 textBox3->Text=f.tostring();
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
				 vlongfloat f,f2;
				 f=strtolf(textBox1->Text);
				 textBox3->Text=exp(f).tostring();
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 textBox4->Text=textBox3->Text->Length.ToString();
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 vlongfloat f;
			 f=strtolf(textBox1->Text);
			 textBox3->Text=sqroot(f).tostring();
		 }
};
}

