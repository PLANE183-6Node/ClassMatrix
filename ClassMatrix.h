#pragma once
#include<iostream>
using namespace std;

class Matrix
{
public:
	Matrix(int, int);
	Matrix(const Matrix&);
	~Matrix();

	Matrix& operator=(const Matrix&);
	Matrix operator+(const Matrix&);

	friend istream& operator>>(istream&, Matrix&);
	friend ostream& operator<<(ostream&, const Matrix);

	int GetElement(int, int);
	int SetElement(int, int, int);

private:
	int lin, col;
	int** mat;
};
