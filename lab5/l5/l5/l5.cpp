#include "stdafx.h"
#include <fstream>
#include <conio.h>
#include <cmath>
#include <string.h>
#include <iostream>
#include <windows.h> //SetConsoleCP(1251); SetConsoleOutputCP(1251); 
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string>
using std::cout;
using std::cin;
using std::endl;
//����������� ������� �����
class Animal
{
public:
char *Title; //������ ���������
Animal(char *t) {Title=t;} //������� �����������
virtual void speak(void)=0; //������ ����������� �������
};
class Frog: public Animal
{
public:
Frog(char *Title): Animal(Title) { };
virtual void speak(void) { cout<<Title<<" ������� "<<"'���-���'"<<endl; };
};
class Dog: public Animal
{public:
Dog(char *Title): Animal(Title) { };
virtual void speak(void) { cout<<Title<<" ������� "<<"'���-���'"<<endl;};
};
class Cat: public Animal
{public:
Cat(char *Title): Animal(Title) { };
virtual void speak(void) { cout<<Title<<" ������� "<<"'���-���'"<<endl;};
};
class Lion: public Cat
{
public:
Lion(char *Title): Cat(Title) { };
virtual void speak(void) { cout<<Title<<" ������� "<<"'���-���'"<<endl;};
// virtual int speak(void) { cout<<Title<<" ������� "<<"'���-���'"<<endl;
//};
// virtual void speak(int When) { cout<<Title<<" ������� "<<
//"'���-���'"<<endl; };
};
int _tmain(int argc, _TCHAR* argv[])
{//������� ������ ���������� �� ������� ����� Animal
//� ����� ��� �������� �����������, �������� �������
SetConsoleCP(1251); SetConsoleOutputCP(1251);
Animal *animals[4] = { new Dog("�����"),
new Cat("�����"),
new Frog("������"),
new Lion("����")}; // c����� ��������
for(int k=0; k<4; k++) animals[k]->speak();
system("pause");return 0;}