#pragma once

namespace My2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(107, 16);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 23);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textbox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(107, 45);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(57, 23);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textbox2_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Сумма (руб.):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Срок (мес.):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 84);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Расчёт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 6;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(407, 217);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Доход";
			this->Activated += gcnew System::EventHandler(this, &Form1::form1_Activated);
			this->Load += gcnew System::EventHandler(this, &Form1::form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
double sum = 0;
int period = 0; 
double percent;
double profit;
try
    {
sum = System::Convert::ToDouble(textBox1->Text);
 period = System::Convert::ToInt32(textBox2->Text);
    }
catch(System::FormatException^)
    {
MessageBox::Show("Сумма должна быть ненулевым вещественным числом.\nПериод должен быть ненулевым целым числом.", 
	"Неправильно введены данные.", MessageBoxButtons::OK, MessageBoxIcon::Warning);
  }
 if ((sum == 0) || (period == 0) || (textBox1->Text->Length == 0) || (textBox2->Text->Length == 0))
{button1->Enabled = false;label4->Text = "Ошибка: одно из значений нулевое!";}
 else
 {
 if (sum < 10000)
 percent = 8.5;
 else
 percent = 12;
 profit = sum * (percent/100/12) * period;
 label3->Text =
 "Процентная ставка: " + percent.ToString("n") + "%\n" +
 "Доход: " + profit.ToString("c");
 label4->Text = "";
		 }
/*try {
int period = System::Convert::ToInt32(textBox2->Text); = System::Convert::ToInt32(as[i]);
}
catch (System::FormatException^) {
MessageBox::Show("Ошибка", "Вектор", MessageBoxButtons::OK, MessageBoxIcon::Warning);
textBox2->Focus();
message = 1;
break;
}*/

}
private: System::Void textbox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
  {/*
if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b')
{e->Handled = true;label4->Text = "Ошибка: введённое значение должно быть вещественным числом!";}
else label4->Text = "";
  */}
  
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
label3->Text = "";
if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0))
{button1->Enabled = false;label4->Text = "Ошибка: одно из полей не заполнено!";}
else 
button1->Enabled = true;
		 }

private: System::Void form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void form1_Activated(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
label3->Text = "";
if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0))
{button1->Enabled = false;label4->Text = "Ошибка: одно из полей не заполнено!";}
else 
button1->Enabled = true;
}

private: System::Void textbox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
{/*if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b')
{e->Handled = true;label4->Text = "Ошибка: введённое значение должно быть целым числом!";}
else label4->Text = "";*/
		 }
};
}

