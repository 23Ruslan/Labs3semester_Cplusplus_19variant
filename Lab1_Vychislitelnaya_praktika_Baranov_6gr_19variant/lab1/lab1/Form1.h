#pragma once

namespace lab1 {

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
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 107);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(238, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Проверить ортогональность и посчитать скалярное произведение данных векоров.";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(157, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(107, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(157, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(107, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(157, 81);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(107, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Размерность векторов:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(96, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Вектор 1:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(96, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Вектор 2:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(215, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Место для вывода результата проверки.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 170);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(241, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Место для вывода скалярного произведения.";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(26, 187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(238, 44);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Проверить данные векторы на коллинеарность.";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 234);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(215, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Место для вывода результата проверки.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 39);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(220, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Ввод компонентов веторов через пробел:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(286, 269);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
static array<char>^ s = gcnew array<char>(200);
static array<char>^ l = gcnew array<char>(200);
static array<int>^ A = gcnew array<int>(50);
static array<int>^ Q = gcnew array<int>(50);
static int dim=1;
static int f=0;
static int e1=0;
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) { }
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) { }
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) { }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
array<String^>^ as;array<Char>^ ar;ar=gcnew array<Char> (1);ar[0]=' ';
if ((textBox2->Text->Length!=0)&&(textBox3->Text->Length!=0)&&(textBox1->Text->Length!=0))
   {e1=0;f=0;
   try{
		dim=Convert::ToInt32(textBox1->Text);
		as=textBox2->Text->Split(ar);
		for(int i=0;i<dim;i++){A[i]=Convert::ToInt32(as[i]);e1++;}//Получение первого вектора из строки
		as=textBox3->Text->Split(ar);
		for(int j=0;j<dim;j++){Q[j]=Convert::ToInt32(as[j]);f++;}//Получение второго вектора из строки
   }catch(System::FormatException^)
   {MessageBox::Show("Компоненты векторов должны быть ненулевыми целыми числами.", 
   "Неправильно введены данные.", MessageBoxButtons::OK, MessageBoxIcon::Warning);}
   if((e1==dim)&&(f==dim))
      {int L=0;
       for(int i=0;i<dim;i++)L=L+A[i]*Q[i];
	   label5->Text="Скалярное произведение "+Convert::ToString(L)+".";
       if(L==0){label4->Text="Векторы являются ортогональными.";}
       else {label4->Text="Векторы не являются ортогональными.";}
       } else label4->Text="Вы ввели не все координаты";
   } else MessageBox::Show("Вы ввели не все данные!\n","Ошибка",MessageBoxButtons::OK,MessageBoxIcon::Error);}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
 array<String^>^ as;
array<Char>^ ar;
ar=gcnew array<Char> (1);
ar[0]=' ';
if ((textBox2->Text->Length!=0)&&(textBox3->Text->Length!=0)&&(textBox1->Text->Length!=0))
   {e1=0;f=0;
   try{dim=Convert::ToInt32(textBox1->Text);
		as=textBox2->Text->Split(ar);
		for(int i=0;i<dim;i++){A[i]=Convert::ToInt32(as[i]);e1++;}//Получение первого вектора из строки
		as=textBox3->Text->Split(ar);
		for(int j=0;j<dim;j++){Q[j]=Convert::ToInt32(as[j]);f++;}//Получение второго вектора из строки
   }catch(System::FormatException^)
   {MessageBox::Show("Компоненты векторов должны быть ненулевыми целыми числами.", 
   "Неправильно введены данные.", MessageBoxButtons::OK, MessageBoxIcon::Warning);}
   if((e1==dim)&&(f==dim)){
       char h;double mod1=0.0,mod2=0.0,abs_scal=0.0;int k=1;
       for (int i=0;i<dim;i++){mod1+=A[i]*A[i]; mod2+=Q[i]*Q[i]; abs_scal+=A[i]*Q[i];}
       mod1=Math::Sqrt(mod1); mod2=Math::Sqrt(mod2); abs_scal=Math::Abs(abs_scal);
       if(mod1*mod2){
           if(Math::Abs(abs_scal/(mod1*mod2)-1.0)<=0.001){
			   label6->Text="Векторы являются коллинеарными.";}
           else {label6->Text="Векторы не являются коллинеарными.";}
       }
       else{label6->Text="Векторы не являются коллинеарными.";}
   }
   else label6->Text="Вы ввели не все координаты.";
}
else MessageBox::Show("Вы ввели не все данные!\n","Ошибка",MessageBoxButtons::OK,MessageBoxIcon::Error);
}

};
}

