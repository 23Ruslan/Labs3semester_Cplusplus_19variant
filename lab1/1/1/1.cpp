// 1.cpp: определяет точку входа для консольного приложения.
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
{cout<<"Введите название книги: "; cin>>name;
cout<<"Введите число страниц: ";cin>>str;
cout<<"Введите издательство: "; cin>>izd;
cout<<"Введите автора: "; cin>>author;cout<<"Введите год издания: "; cin>>yearizd;
cout<<"\n";
}
void Book::show()
{
cout<<"\n";
cout<<"Название книги: "<<name<<endl;
cout<<"Число страниц: "<<str<<endl;
cout<<"Издательство: "<<izd<<endl;
cout<<"Автор: "<<author<<endl;cout<<"Год издания: "<<yearizd<<endl;
}
char *Book::getauthor() { return author; }
char *Book::getizd() { return izd; }
int Book::getyearizd() { return yearizd;}
void spisauthor(Book spis[],int n)//список
{char author[20];
cout<<"Введите автора: "; cin>>author;
for(int i=0;i<n;i++)
if(strcmp(spis[i].getauthor(),author)==0)spis[i].show();
}
void spisizd(Book spis[],int n)//список
{char izd[20];
cout<<"Введите издательство: "; cin>>izd;
for(int i=0;i<n;i++)
if(strcmp(spis[i].getizd(),izd)==0)spis[i].show();
}
void spisauthyearizd(Book spis[],int n) //список книг, вышедших после заданного года
{int i,k;
cout<<"Введите год издания, позже которого нужны книги: "; cin>>k;
for(i=0;i<n;i++)
if ((spis[i].getyearizd()>=k))
spis[i].show();
}
int _tmain(int argc, _TCHAR* argv[])
{SetConsoleCP(1251); SetConsoleOutputCP(1251);
Book *spis;
int n;
cout<<"Введите число книг: ";cin>>n;cout<<"\n";
spis=new Book [n];
for(int i=0;i<n;i++) spis[i].show();
spisauthor(spis,n);
spisizd(spis,n);
spisauthyearizd(spis,n);
delete [] spis;
cout<<"Нажмите любую клавишу для выхода";
while (!kbhit());
return 0;}



