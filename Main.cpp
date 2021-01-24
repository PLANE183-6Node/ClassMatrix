#include"ClassMatrix.h"

int main()
{
	Matrix matrix1(3, 3);
	matrix1.SetElement(0, 0, 12);
	matrix1.SetElement(0, 1, 12);
	matrix1.SetElement(0, 2, 12);

	matrix1.SetElement(1, 0, 12);
	matrix1.SetElement(1, 1, 12);
	matrix1.SetElement(1, 2, 12);

	matrix1.SetElement(2, 0, 12);
	matrix1.SetElement(2, 1, 12);
	matrix1.SetElement(2, 2, 12);
	cout << matrix1;


	Matrix matrix2(3, 3);
	matrix2.SetElement(0, 0, 8);
	matrix2.SetElement(0, 1, 8);
	matrix2.SetElement(0, 2, 8);

	matrix2.SetElement(1, 0, 8);
	matrix2.SetElement(1, 1, 8);
	matrix2.SetElement(1, 2, 8);

	matrix2.SetElement(2, 0, 8);
	matrix2.SetElement(2, 1, 8);
	matrix2.SetElement(2, 2, 8);
	cout << matrix2;


	Matrix matrix3(3, 3);
	matrix3 = matrix1 + matrix2;
	cout << matrix3;
	
	system("pause");
	return 0;
}