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
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;
using std::rand;
template <class T> //����������
class Matrix {
	int n;
	T** arr;// ������ ��������� �������
public:
	Matrix(); //������������
	Matrix(int k);
	Matrix(int k, T** mas);
	Matrix(const Matrix<T>& ob); //����������� �����������
	~Matrix() {
		for (int i = 0; i < n; i++) {
			delete[] arr[i];
		}
		delete[] arr;
	}
	T Norm(int n);
	Matrix<T> operator-(Matrix<T> b);//���������� ����������
	Matrix<T> operator+(Matrix<T> b);
	Matrix<T> operator*(Matrix<T> b);
	Matrix<T>& operator=(Matrix<T>& ob);

	template <class T> 
	friend istream& operator >> (istream&, Matrix<T>&);
	template <class T>
	friend ostream& operator << (ostream&, Matrix<T>);
};
template <class T>//Matrix()
Matrix<T>::Matrix() {
	n = 3; // �� ��������� ������ ������� = 3
	arr = new T* [n];
	for (int k = 0; k < n; k++) {
		arr[k] = new T[n];}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 10;}}}
template <class T>//Matrix(int k)
Matrix<T>::Matrix(int k) {
	n = k;
	arr = new T* [n];
	for (int k = 0; k < n; k++) {
		arr[k] = new T[n];}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 10;}}}
template <class T>//Matrix(int k, �** mas)
Matrix<T>::Matrix(int k, T** mas) {
	n = k; // ������ �������
	arr = new T* [n]; // �������� ����� � ������ ��� �������
	for (int i = 0; i < n; i++) {
		arr[i] = new T[n];}
	for (int j = 0; j < n; j++) { // �������� �������
		for (int k = 0; k < n; k++) {
			arr[j][k] = mas[j][k];}}}
template <class T>//����������� �����������
Matrix<T>::Matrix(const Matrix<T>& ob) {
	n = ob.n;
	arr = new T* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new T[n];}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = ob.arr[i][j];}}}
template<class T> //����� �������
T Matrix<T>::Norm(int n) {
	int max;
	max = 0;
	for (int i = 0; i < n; i++) {
		int s = 0;
		for (int j = 0; j < n; j++) {
			s += abs(arr[i][j]);
		}
		if (s > max) {
			max = s;
		}
	}return max;}
template<class T>//�������� ������
Matrix<T> Matrix<T>::operator+(Matrix<T> b) {
	Matrix sum(b.n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < b.n; j++) {
			sum.arr[i][j] = (arr[i][j] + b.arr[i][j]);
		}
	}return sum;}
template<class T>//��������� ������
Matrix<T> Matrix<T>::operator-(Matrix<T> b) {
	Matrix razn(b.n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < b.n; j++) {
			razn.arr[i][j] = (arr[i][j] - b.arr[i][j]);
		}
	}return razn;}
template<class T>//��������� ������
Matrix<T> Matrix<T>::operator*(Matrix<T> b) {
	Matrix mult(b.n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < b.n; j++) {
			for (int k = 0; k < n; k++) {
				mult.arr[i][j] += (arr[i][k] * b.arr[k][j]);
			}
		}
	}return mult;}
template<class T>//������������
Matrix<T>& Matrix<T>::operator=(Matrix<T>& ob) {
	if (n != ob.n) {
		for (int i = 0; i < n; i++) {// ������������ ������ � ����� ��������
			delete[] arr[i];
		}
		delete[] arr;
		n = ob.n;// ��������� ������ � ����� ��������
		arr = new T* [n];
		for (int i = 0; i < n; i++) {
			arr[i] = new T[n];}
	}// ����������� ������ ������� �������� � �����
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = ob.arr[i][j];}
	}return *this;}
template<class T>//friend ostream
ostream& operator << (ostream& out, Matrix<T> ob) {
	if (ob.arr != NULL) {
		out << "Matrix:" << endl;
		for (int i = 0; i < ob.n; i++) {
			for (int j = 0; j < ob.n; j++) {
				out << ob.arr[i][j] << " ";}
			out << endl;}}
	else
		out << "Matrix null" << endl;
	return out;}
template<class T>//friend istream
istream& operator >> (istream& in, Matrix<T>& ob) {
	if (ob.arr != NULL) {
		for (int i = 0; i < ob.n; i++) {
			for (int j = 0; j < ob.n; j++) {
				in >> ob.arr[i][j];}}}
	return in;}
int _tmain(int argc, _TCHAR* argv[])
{SetConsoleCP(1251); SetConsoleOutputCP(1251);
//setlocale(LC_ALL, "Russian");
	int n;
	cout << "P����������  = ";
	cin >> n;
	Matrix<char> M1(n);
	cout << "���� �������" << endl;
	cin >> M1;
	cout << "����� �������" << endl;
	cout << M1;
	Matrix<char> M2(n);
	cout << "���� �������" << endl;
	cin >> M2;
	cout << "����� �������" << endl;
	cout << M2;
	cout << "������������ ������:  " << endl << M1.operator*(M2);
	cout << "����� ������:  " << endl << M1.operator+(M2);
	cout << "�������� ������:  " << endl << M1.operator-(M2);
	cout << "����� �������: " << M1.Norm(n) << endl;
	cout << "����� �������: " << M2.Norm(n) << endl;
	Matrix<char> M3(n);
	cout << "������������: " << endl << M3.operator=(M2);
	cout << "���������� � �������: " << endl << M1.operator*(M3);
	system("pause");
	return 0;}