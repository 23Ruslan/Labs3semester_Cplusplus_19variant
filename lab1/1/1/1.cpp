// 1.cpp: ���������� ����� ����� ��� ����������� ����������.
#include "stdafx.h"
#include <conio.h>
#include <string.h>
#include <iostream>
#include <windows.h> // SetConsoleCP(1251); SetConsoleOutputCP(1251); 
using namespace std;
class Book{
char name[30], izd[30], author[20];
int yearizd, str;
public:
Book();
char *getauthor();
char *getizd();
int getyearizd();
void show();
};
Book::Book()
{cout<<"������� �������� �����: "; cin>>name;
cout<<"������� ����� �������: ";cin>>str;
cout<<"������� ������������: "; cin>>izd;
cout<<"������� ������: "; cin>>author;cout<<"������� ��� �������: "; cin>>yearizd;
cout<<"\n";
}
void Book::show()
{
cout<<"\n";
cout<<"�������� �����: "<<name<<endl;
cout<<"����� �������: "<<str<<endl;
cout<<"������������: "<<izd<<endl;
cout<<"�����: "<<author<<endl;cout<<"��� �������: "<<yearizd<<endl;
}
char *Book::getauthor() { return author; }
char *Book::getizd() { return izd; }
int Book::getyearizd() { return yearizd;}
void spisauthor(Book spis[],int n)//������
{char author[20];
cout<<"������� ������: "; cin>>author;
for(int i=0;i<n;i++)
if(strcmp(spis[i].getauthor(),author)==0)spis[i].show();
}
void spisizd(Book spis[],int n)//������
{char izd[20];
cout<<"������� ������������: "; cin>>izd;
for(int i=0;i<n;i++)
if(strcmp(spis[i].getizd(),izd)==0)spis[i].show();
}
void spisauthyearizd(Book spis[],int n) //������ ����, �������� ����� ��������� ����
{int i,k;
cout<<"������� ��� �������, ����� �������� ����� �����: "; cin>>k;
for(i=0;i<n;i++)
if ((spis[i].getyearizd()>=k))
spis[i].show();
}
int _tmain(int argc, _TCHAR* argv[])
{SetConsoleCP(1251); SetConsoleOutputCP(1251);
Book *spis;
int n;
cout<<"������� ����� ����: ";cin>>n;cout<<"\n";
spis=new Book [n];
for(int i=0;i<n;i++) spis[i].show();
spisauthor(spis,n);
spisizd(spis,n);
spisauthyearizd(spis,n);
delete [] spis;
cout<<"������� ����� ������� ��� ������";
while (!kbhit());
return 0;}



