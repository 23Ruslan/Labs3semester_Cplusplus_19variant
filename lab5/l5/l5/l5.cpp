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
//абстрактный базовый класс
class Animal
{
public:
char *Title; //кличка животного
Animal(char *t) {Title=t;} //простой конструктор
virtual void speak(void)=0; //чиста€ виртуальна€ функци€
};
class Frog: public Animal
{
public:
Frog(char *Title): Animal(Title) { };
virtual void speak(void) { cout<<Title<<" говорит "<<"'ква-ква'"<<endl; };
};
class Dog: public Animal
{public:
Dog(char *Title): Animal(Title) { };
virtual void speak(void) { cout<<Title<<" говорит "<<"'гав-гав'"<<endl;};
};
class Cat: public Animal
{public:
Cat(char *Title): Animal(Title) { };
virtual void speak(void) { cout<<Title<<" говорит "<<"'м€у-м€у'"<<endl;};
};
class Lion: public Cat
{
public:
Lion(char *Title): Cat(Title) { };
virtual void speak(void) { cout<<Title<<" говорит "<<"'ррр-ррр'"<<endl;};
// virtual int speak(void) { cout<<Title<<" говорит "<<"'ррр-ррр'"<<endl;
//};
// virtual void speak(int When) { cout<<Title<<" говорит "<<
//"'ооа-ооу'"<<endl; };
};
int _tmain(int argc, _TCHAR* argv[])
{//объ€вим массив указателей на базовый класс Animal
//и сразу его заполним указател€ми, создава€ объекты
SetConsoleCP(1251); SetConsoleOutputCP(1251);
Animal *animals[4] = { new Dog("Ѕобик"),
new Cat("ћурка"),
new Frog(" ермит"),
new Lion(" инг")}; // cписок животных
for(int k=0; k<4; k++) animals[k]->speak();
system("pause");return 0;}