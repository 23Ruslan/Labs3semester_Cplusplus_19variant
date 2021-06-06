#pragma once

namespace lab3a {

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(646, 317);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(781, 387);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: int l, b, h, w;
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {}

private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
h = pictureBox1->Height;            // Ширина
w = pictureBox1->Width;      // Высота
// Osi
   e->Graphics->DrawLine(Pens::Black,0,h/2,w,h/2);
    e->Graphics->DrawLine(Pens::Black,w/2,0,w/2,h);
   // Strelki
    e->Graphics->DrawLine(Pens::Black,w-25,h/2+8,w,h/2);
     e->Graphics->DrawLine(Pens::Black,w-25,h/2-8,w,h/2);
     e->Graphics->DrawLine(Pens::Black,w/2-8,25,w/2,0);
     e->Graphics->DrawLine(Pens::Black,w/2+8,25,w/2,0);
   // Podpisi
   e->Graphics->DrawString("X",this->Font,Brushes::Black,w-15,h/2-25);
   e->Graphics->DrawString("Y",this->Font,Brushes::Black,w/2-25,5);
   double x1, x2, y1, y2, x, y, mx, my, x0, y0, dx,dt;
   x1 = -5;    // from
   x2 = 5;     // to
   dx = 0.003;     // step
   y1 = (x1+2)/(x1-3);
   y2 = (x2+2)/(x2-3);
   x = x1;
   while(x <= x2)
   {//if (x==3) {continue;}
     y = (x+2)/(x-3);
     if ((y < y1)&&(y>-2)) y1 = y;
     if ((y > y2)&&(y<6)) y2 = y;
     x+=dx;
   }
   my = 0.5*h/(y2-y1);           // mashtab po osi y
   mx = w/(x2-x1);                 // mashtab po osi x
   x = x1;
   y1=(x1+2)/(x1-3);
   x+=dx;
   while(x <= x2) // График
   {
      y = (x+2)/(x-3);
      e->Graphics->DrawLine(Pens::Black,(int)(x1*mx+w/2),(int)(h/2-y1*my),(int)(x*mx+w/2),(int)(h/2-y*my));
      x1=x;
      y1=y;
      x+=dx;
   }

x1 = -1.3;    // from
x2 = 1.3;     // to
dt = 0.001;     // step
y1 = -1.3;
y2 = 1.3;
my = h/(y2-y1);           // mashtab po osi y
mx = w/(x2-x1);                 // mashtab po osi x
double t = 0;
x1=0.1*t*Math::Cos(t);// График
y1=0.1*t*Math::Sin(t);
t+=dt;
while(t <= 4*3.14)
   {
       x=0.1*t*Math::Cos(t);
       y=0.1*t*Math::Sin(t);
       e->Graphics->DrawLine(Pens::Green,(int)(x1*mx+w/2),(int)(h/2-y1*my),(int)(x*mx+w/2),(int)(h/2-y*my));
       t+=dt;
       x1=x;
       y1=y;
   }
}

};
}