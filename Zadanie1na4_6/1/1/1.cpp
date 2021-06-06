// 1.cpp: главный файл проекта.
#include "stdafx.h"
#include<iostream>
#include<math.h>
#include<windows.h>
//using namespace System;
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;
using std::rand;
 class Vector
 {public: int n; int* arr;
 Vector();
 Vector(int k);
 Vector(const Vector& ob);
 Vector(int h1,int h2);
 void show();
 friend istream& operator >> (istream&, Vector&);
 friend ostream& operator << (ostream&, Vector);
 public: void compare (Vector* a, Vector* b);
 /*public: double Skalar(Vector* vect1, Vector* vect2);
 public: double Modul(Vector* vect);
public: bool Ortogonal (Vektor* Vector1, Vektor* Vector2);
public: bool Kolliniar (Vektor* Vector1, Vektor* Vector2);*/
};
    Vector::Vector(){
n=3;
arr = new int [n];
for (int i = 0;i<n;i++) arr[i]=rand()%10;
	}
	Vector::Vector(int k){
n=k;
arr = new int [n];
for (int i=0;i<n;i++) arr[i]=(int)rand()%10;
	}
ostream& operator << (ostream& out, Vector ob){//friend ostream& operator << (ostream&, Vector)
	if (ob.arr != NULL){
	out << "Вектор:" << endl;
	for (int i = 0; i < ob.n; i++){out<< ob.arr[i]<<" ";out<<endl;}}
	else
	out << "Вектор нулевой" << endl;
	return out;}
istream& operator >> (istream& in, Vector& ob){//friend istream& operator >> (istream&, Vector&)
	if (ob.arr != NULL){
	for (int i = 0; i < ob.n; i++){in>>ob.arr[i];}}
	return in;}
/*double Vector::Skalar(Vector* vect1, Vector* vect2){
   double temp=0;
   for (int i=0;i<n;i++) temp+=vect1->arr[i]*vect2->arr[i];
   return temp;
}
double Vector::Modul(Vector* vect)        //Вычислить модуль
    {   float modul = 0;
        for (int i=0; i < n; i++ )
            modul += *(arr + i) *  *(arr + i);
        return sqrt (modul);    }
bool Vector::Ortogonal (Vektor* Vector1, Vektor* Vector2)
{    if ( (Skalar (Vector1, Vector2)) < 0.01 )
        return true;
    else
        return false;}
bool Vector::Kolliniar (Vektor* Vector1, Vektor* Vector2)
{    if ( (Skalar (Vector1, Vector2) - ((*Vector1).Modul() * (*Vector2).Modul())) < 0.01 )
        return true;
    else
        return false;}*/
void Vector::compare (Vector* a, Vector* b){
bool ortogonal, collinear = true; double scalar_product = 0;
for (int i=0; i<n; i++){
	if (a->arr[i]/b->arr[i] != a->arr[0]/b->arr[0]) {collinear = false;}
	scalar_product += a->arr[i]*b->arr[i];
  }
if (scalar_product == 0) {ortogonal = true;} else {ortogonal = false;}
if (ortogonal == true) {cout<<"ортогональны, ";} else {cout<<"неортогональны, ";}
if (collinear == true) {cout<<"коллинеарны. ";} else {cout<<"неколлинеарны. ";}
}

int main(array<System::String ^> ^args)
{int m1,m2;
SetConsoleCP(1251); SetConsoleOutputCP(1251);
cout<<" Введите размерность векторов: ";cin>>m1;
cout<<"\n Введите число векторов: ";cin>>m2;cout<<"\n";
Vector* arrv = new Vector[m2];
   for (int i=0;i<m2;i++)
{Vector tmp(m1);
  cout<<"Введите "<<m1<<" элементов вектора №"<<i<<":\n";
  for (int j=0;j<m1;j++) {cin>>tmp.arr[j];}
  arrv[i]=tmp;
}
 if (m2==2 || m2==3)
 {cout<<"Сравнение векторов №0 и №1: ";arrv[0].compare(&arrv[0],&arrv[1]);}
 if (m2==4 || m2==5)
 {cout<<"Сравнение векторов №2 и №3: ";arrv[2].compare(&arrv[2],&arrv[3]);}
cout<<"\n";
system("pause");return 0;
}