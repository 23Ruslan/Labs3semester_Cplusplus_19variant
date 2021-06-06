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
const int n = 5;
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;
using std::rand;
class Matrix {
public:
	int n;
	int** arr;//elementi matrici
	Matrix(); //constructori
	Matrix(int k);
	Matrix(int k, int mas[][4]);
	Matrix(const Matrix& ob); //konstryktor kopirovania
	~Matrix() {delete[]arr;}
	//methods dlya polychenua polei
	void show();
	int num() {
		return this->n;}
	int** mas_arr() {
		return this->arr;}
	//methods
	void Addition(Matrix b);
	void Subtraction(Matrix b);
	void Multiplication(Matrix b); 
	void Norm(int x);
	void quadr(Matrix s);
	//peregryzka
	Matrix operator-(Matrix ob);
	Matrix operator+(Matrix ob); 
	Matrix operator*(Matrix ob);
	Matrix& operator=(Matrix& ob);
	friend istream& operator >> (istream&, Matrix&);
	friend ostream& operator << (ostream&, Matrix);
};
Matrix::Matrix() {//Matrix()
	srand((int)time(NULL));
	n = rand() % 5;
	arr = new int*[n + 1];
	for (int i = 0; i < n; i++) arr[i] = new int[n+1];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			arr[i][j] = rand() % 5 - 5;}}}
Matrix::Matrix(int k) { //Matrix(int k)
	n = k;
	arr = new int*[n + 1];
	for (int i = 0; i < n; i++) arr[i] = new int[n+1];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			arr[i][j] = rand() % 5 - 5;}}}
Matrix::Matrix(int k, int mas[][4]) {//Matrix(int k, int** mas)
	n = k;
	arr = new int*[n + 1];
	for (int i = 0; i < n; i++) arr[i] = new int[n+1];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = mas[i][j];}}}
Matrix::Matrix(const Matrix& ob) {//Matrix(const Matrix&ob)
	n = ob.n;
	if (ob.arr == NULL)
	{
		arr = NULL;
		return;}
	arr = new int* [n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = ob.arr[i][j];}
void Matrix::Addition(Matrix b) {//void* Addition(Matrix b)
	Matrix sum(b.n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < b.n; j++) {
			sum.arr[i][j] = (arr[i][j] + b.arr[i][j]);}}
cout << sum;}
void Matrix::Subtraction(Matrix b) {//void* Subtraction(Matrix b)
	Matrix razn(b.n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < b.n; j++) {
			razn.arr[i][j] = (arr[i][j] - b.arr[i][j]);}}
cout << razn;}
void Matrix::Multiplication(Matrix b) {//void* Multiplication(Matrix b)
	Matrix mult(b.n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < b.n; j++) {
			for (int k = 0; k < n; k++) {
				mult.arr[i][j] += (arr[i][k] * b.arr[k][j]);}}}
cout << mult;}
void Matrix::show()
{for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
		cout<<arr[i][j];cout<<"\t";} cout<<"\n";}
}
void Matrix::Norm(int x) {//void* Norm(int x)
	int max = 0;
	for (int i = 0; i < n; i++) {
		int s = 0;
		for (int j = 0; j < n; j++) {
			s += abs(x);}
		if (s > max) {
			max = s;}}
cout << max;}
void Matrix::quadr(Matrix s) {//функци€ возведени€ в квадрат
	for (int i = 0; i < s.n; i++)
		for (int j = 0; j < s.n; j++)
			for (int k = 0; k < s.n; k++)
				s.arr[i][j] += (s.arr[i][k] * s.arr[k][j]);}
Matrix Matrix::operator+(Matrix ob) {//Matrix operator+(Matrix ob)
	Matrix sum(ob.n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < ob.n; j++) {
			sum.arr[i][j] = (arr[i][j] + ob.arr[i][j]);}}
	return sum;}
Matrix Matrix::operator-(Matrix ob) {//Matrix operator-(Matrix ob)
	Matrix razn(ob.n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < ob.n; j++) {
			razn.arr[i][j] = (arr[i][j] - ob.arr[i][j]);}}
	return razn;}
Matrix Matrix::operator*(Matrix ob) {//Matrix operator*(Matrix ob)
	Matrix mult(ob.n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < ob.n; j++)
			for (int k = 0; k < n; k++)
				mult.arr[i][j] += (arr[i][k] * ob.arr[k][j]);
	return mult;
}
Matrix& Matrix::operator=(Matrix& ob) {//Matrix& operator=(Matrix& ob)
	if (n != ob.n)
	{
		for (int i = 0; i < n; i++) {// освобождение пам€ти в левом операнде
			delete[] arr[i];
		}
		delete[] arr;// выделение пам€ти в левом операнде
		n = ob.n;
		arr = new int* [n];
		for (int i = 0; i < n; i++) {
			arr[i] = new int[n];
		}}// копирование данных правого операнда в левый
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = ob.arr[i][j];}}
	return *this;}
ostream& operator << (ostream& out, Matrix ob){//friend ostream& operator << (ostream&, Matrix)
	if (ob.arr != NULL){
		out << "Matrix:" << endl;
		for (int i = 0; i < ob.n; i++){
			for (int j = 0; j < ob.n; j++) {
				out << ob.arr[i][j] <<" ";
			}	
			out << endl;}}
	else
		out << "Matrix null" << endl;
	return out;}
istream& operator >> (istream& in, Matrix& ob){//friend istream& operator >> (istream&, Matrix&)
	if (ob.arr != NULL){
		for (int i = 0; i < ob.n; i++) {
			for (int j = 0; j < ob.n; j++) {
				in >> ob.arr[i][j];}}}
	return in;}

int main(int argc, char* argv[]) {            //main
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	int p[4][4] = {
    { 1, 2, 3, 4},
    { 2, 4, 6, 8},
    { 3, 6, 9, 7},
	{ 4, 6, 3, 2}};
	/*const int n = 3;
	Matrix matr[3];
	matr[2].operator=(quadr(matr[2]));
	cout << matr[2];*/
	Matrix *m1, *m2, *m3, *m4, *m5, *m6, *m7;
	m1 = new Matrix();
	m1->show();
	int k;cout<<"¬ведите нужую размерность матрицы: ";cin>>k;
	m2 = new Matrix(k);
	m2->show();
	cout<<"¬ведите нужую размерность матрицы: ";cin>>k;
	m3 = new Matrix(k,p);
	m3->show();
	cout<<"n \n m4 \n";
	m4 = new Matrix(*m3);
	m4->show();cout<<"\n \n";
	m3->Addition(*m4);
	m3->show();cout<<"\n \n";
	/*m3->Multiplication(*m4);
	m3->show();*/cout<<"\n \n";
	m5=m3;cout<<"\n \n";
	m5->show();cout<<"\n \n";
	m3->Multiplication(*m4);
	m3->show();cout<<"\n \n";
	system("pause");
	return 0;
}