#include"ClassMatrix.h"

istream& operator>>(istream& firstp, Matrix& secondp)
{
	firstp >> secondp.lin >> secondp.col;
	secondp.mat = new int* [secondp.lin];

	for (int i = 0; i < secondp.lin; i++)
		secondp.mat[i] = new int[secondp.col];

	for (int i = 0; i < secondp.lin; i++)
		for (int j = 0; j < secondp.col; j++)
		{
			firstp >> secondp.mat[i][j];
		}
	return firstp;
}


ostream& operator<<(ostream& firstp, const Matrix secondp) 
{

	for (int i = 0; i < secondp.lin; i++)
	{
		for (int j = 0; j < secondp.col; j++)
			firstp << secondp.mat[i][j] << " ";
		firstp << endl;
	}
	return firstp;
}

Matrix& Matrix::operator=(const Matrix& p) //constructor egal
{
	this->lin = p.lin;
	this->col = p.col;
	this->mat = new int* [this->lin];

	for (int i = 0; i < p.lin; i++)
		this->mat[i] = new int[p.col];
	for (int i = 0; i < this->lin; i++)
		for (int j = 0; j < this->col; j++)
		{
			this->mat[i][j] = p.mat[i][j];
		}
	return (*this);
}


Matrix::Matrix(int lin, int col) //constructor parametru
{
	this->lin = lin;
	this->col = col;
	this->mat = new int* [this->lin];

	for (int i = 0; i < this->lin; i++)
		this->mat[i] = new int[this->col];

	for (int i = 0; i < this->lin; i++)
		for (int j = 0; j < this->col; j++)
		{
			this->mat[i][j] = 0;
		}
}


Matrix::Matrix(const Matrix& p) //copy constructor
{
	this->lin = p.lin;
	this->col = p.col;
	mat = new int* [this->lin];
	for (int i = 0; i < this->lin; i++)
		mat[i] = new int[this->col];

	for (int i = 0; i < this->lin; i++)
		for (int j = 0; j < this->col; j++)
		{
			this->mat[i][j] = p.mat[i][j];
		}
}


Matrix::~Matrix() //destructor
{
	for (int i = 0; i < this->lin; ++i)
		delete[] mat[i];

	delete[] mat;
}


Matrix Matrix::operator+(const Matrix& p) //supraincarcare+
{
	Matrix loopMatrix(this->lin, this->col);

	for (int i = 0; i < loopMatrix.lin; i++)
		for (int j = 0; j < loopMatrix.col; j++)
		{
			loopMatrix.mat[i][j] = this->mat[i][j] + p.mat[i][j];
		}
	return loopMatrix;
}


int Matrix::GetElement(int i, int j) {

	return mat[i][j];
}

int Matrix::SetElement(int i, int j, int val) {

	return mat[i][j] = val;
}
