#pragma once

namespace lab2 {

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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Размер матрицы:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(85, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(428, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Заполнение матрицы элементами (ввод целочисленных элементов через пробел):";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(409, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 24);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Очистить поле:";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 192);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 27);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Очистить поле:";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(387, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 59);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Сместить матрицу вправо на k шагов (по умолчанию k=1)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Результат сдвига:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(519, 61);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox1->Size = System::Drawing::Size(100, 72);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(110, 173);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox2->Size = System::Drawing::Size(100, 101);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(107, 9);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(213, 9);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(572, 159);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(47, 20);
			this->textBox5->TabIndex = 10;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(355, 80);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(158, 28);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Открыть матрицу из файла.";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(107, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"n строк";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(213, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"m столбцов";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(547, 159);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"k =";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(387, 204);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(126, 59);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Сместить матрицу влево на q шагов (по умолчанию q=1)";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(547, 224);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"q =";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(572, 224);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(47, 20);
			this->textBox6->TabIndex = 17;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 225);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 49);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Сохранить матрицу в файл.";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(192, 45);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(427, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"в строке матрицы пробел перед первым элементом и после последнего не нужен";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(430, 32);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(189, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Enter для перехода на новую строку";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(712, 351);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {textBox1->Text="";}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {textBox2->Text="";}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
int len=Convert::ToInt32(textBox1->Text->Length), len2=Convert::ToInt32(textBox1->Lines->Length), i, wt=0,n,m;
for(i=0; i<len; ++i) if(textBox1->Text[i] == ' ') wt++;
textBox3->Text = Convert::ToString(len2); textBox4->Text = Convert::ToString(1+wt/len2);
int k,j,t; String^s=""; array<Char>^ ar; ar=gcnew array<Char> (1);ar[0]=' '; array<int,2>^ A;
n=Convert::ToInt32(textBox3->Text);m=Convert::ToInt32(textBox4->Text);
if(textBox5->Text==""){k=1;}else k=Convert::ToInt32(textBox5->Text);
if(textBox1->Lines->Length==0) //Проверяем, что рабочее поле содержит информацию
	{MessageBox::Show("Введите матрицу !\n","Ошибка",MessageBoxButtons::OK,MessageBoxIcon::Error);
	return;
	}
 if(textBox1->Lines->Length!=n)//Проверяем, что размеры матрицы из рабочего поля совпадают с размерами,
//введёнными в поля textBox2 и textBox3.
	{MessageBox::Show("Введенная матрица имеет неверные размеры !\n","Ошибка",MessageBoxButtons::OK,MessageBoxIcon::Error);
	return;
	}
A=gcnew array<int,2> (n,m);//Создаём динамическую вспомагательную матрицу А[n][m]
array<String^>^ as;//Заполняем матрицу А элементами рабочего поля (textBox1).
for(i=0;i<n;i++)
	{
	as=textBox1->Lines[i]->Split(ar);
	for(j=0;j<m;j++)
	A[i,j]=Convert::ToInt32(as[j]);
	}
for(int ik=1;ik<=k;ik++)//Сдвигаем матрицу А вправо на k позиций
  for(i=0;i<n;i++)
   for(j=0;j<m-1;j++)
    {
     t=A[i,j];
     A[i,j]=A[i,m-1];
     A[i,m-1]=t;
    }
textBox2->Text="";
as= gcnew array<String^> (n);
//s="";
for(i=0;i<n;i++)//Преобразованную матрицу А выводим в поле вывода результата (Memo2)
  {s="";
   for(j=0;j<m;j++) if (j == m-1) {s+=A[i,j].ToString();} else {s+=A[i,j].ToString()+" ";}
   //s+="\n";
   //textBox2->Lines[i]=s;
   as[i]=s;
  }
//textBox2->Text=s;
textBox2->Lines=as;
}

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	/*textBox1->Multiline = true;//это можно поменять в меню стрелочки над окном текстбокса в конструкторе формы
	//textBox1->ScrollBars = ScrollBars->Vertical;
	textBox1->AcceptsReturn = true;
	textBox1->AcceptsTab = true;
	textBox1->WordWrap = true;
	textBox2->Multiline = true;
	//textBox2->ScrollBars = ScrollBars->Vertical;
	textBox2->AcceptsReturn = true;
	textBox2->AcceptsTab = true;
	textBox2->WordWrap = true;*/}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
System::Windows::Forms::DialogResult dr; String^ fn;	
openFileDialog1->FileName = String::Empty;
dr = openFileDialog1->ShowDialog();// отобразить диалог Открыть
if (dr == System::Windows::Forms::DialogResult::OK)
	{
	fn = openFileDialog1->FileName;		
	try
		{System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(fn);//считываем данные из файла
		textBox1->Text = sr->ReadToEnd(); sr->Close();
		}
		catch (System::IO::FileLoadException^ e)
		{MessageBox::Show("Ошибка ввода:\n" + e->Message,"Матрицы",MessageBoxButtons::OK,MessageBoxIcon::Error);
		}
	}
int len=Convert::ToInt32(textBox1->Text->Length), len2=Convert::ToInt32(textBox1->Lines->Length), i, wt=0;
for(i=0; i<len; ++i) if(textBox1->Text[i] == ' ') wt++;
textBox3->Text = Convert::ToString(len2); textBox4->Text = Convert::ToString(1+wt/len2);
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
int len=Convert::ToInt32(textBox1->Text->Length), len2=Convert::ToInt32(textBox1->Lines->Length), i, wt=0,n,m;
for(i=0; i<len; ++i) if(textBox1->Text[i] == ' ') wt++;
textBox3->Text = Convert::ToString(len2); textBox4->Text = Convert::ToString(1+wt/len2);
int q,j,t; String^s=""; array<Char>^ ar; ar=gcnew array<Char> (1);ar[0]=' '; array<int,2>^ A;
n=Convert::ToInt32(textBox3->Text);m=Convert::ToInt32(textBox4->Text);
if(textBox6->Text==""){q=1;}else q=Convert::ToInt32(textBox6->Text);
if(textBox1->Lines->Length==0) //Проверяем, что рабочее поле содержит информацию
	{MessageBox::Show("Введите матрицу !\n","Ошибка",MessageBoxButtons::OK,MessageBoxIcon::Error);
	return;
	}
 if(textBox1->Lines->Length!=n)//Проверяем, что размеры матрицы из рабочего поля совпадают с размерами,
//введёнными в поля textBox2 и textBox3.
	{MessageBox::Show("Введенная матрица имеет неверные размеры !\n","Ошибка",MessageBoxButtons::OK,MessageBoxIcon::Error);
	return;
	}
A=gcnew array<int,2> (n,m);//Создаём динамическую вспомагательную матрицу А[n][m]
array<String^>^ as;//Заполняем матрицу А элементами рабочего поля (textBox1).
for(i=0;i<n;i++)
	{
	as=textBox1->Lines[i]->Split(ar);
	for(j=0;j<m;j++)
	A[i,j]=Convert::ToInt32(as[j]);
	}
for(int ik=1;ik<=q;ik++)//Сдвигаем матрицу А влево на q позиций
  for(i=0;i<n;i++)
   for(j=m-1;j>=0;j--)
    {
     t=A[i,m-1];
     A[i,m-1]=A[i,j];
     A[i,j]=t;
    }
textBox2->Text="";
as= gcnew array<String^> (n);
//s="";
for(i=0;i<n;i++)//Преобразованную матрицу А выводим в поле вывода результата (Memo2)
  {s="";
   for(j=0;j<m;j++) if (j == m-1) {s+=A[i,j].ToString();} else {s+=A[i,j].ToString()+" ";}
   //s+="\n";
   //textBox2->Lines[i]=s;
   as[i]=s;
  }
//textBox2->Text=s;
textBox2->Lines=as;
}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
System::Windows::Forms::DialogResult dr1;
   String^ fn1;
		// отобразить диалог Сохранить
		dr1 = saveFileDialog1->ShowDialog();
        if (dr1 ==System::Windows::Forms::DialogResult::OK)
        {fn1 = saveFileDialog1->FileName;// сохранить файл
     try
        {// получим информацию о файле fn
         System::IO::FileInfo^ fi = gcnew System::IO::FileInfo(fn1);
	     System::IO::StreamWriter^ sw =fi->CreateText();// поток для записи
         sw->Write(textBox2->Text);
         sw->Close(); // закрываем поток
        }
       catch ( System::IO::IOException^ e)
        {
		 MessageBox::Show(e->ToString(),"Матрицы",MessageBoxButtons::OK,MessageBoxIcon::Error);
        }
        }
this->Close();
}

};
}