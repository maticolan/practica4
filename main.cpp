#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	const int filas_max = 100;
	const int columnas_max = 100;

	int* Input[filas_max];

	int filas, columnas;
	cout << "N° de filas: ";
	cin >> filas;
	cout << "N° de columnas: ";
	cin >> columnas;


	int I[filas_max * columnas_max];

	for (int *p = *Input; p < *(Input+filas); p++)
	{
		Input[i] = & I[i * columnas];
	}

	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			Input[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << Input[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << endl;

	int kernel[3] = { 1,2,1 };

	int* Output[filas_max];

	for (int i = 0; i < filas; i++)
	{
		Output[i] = &I[i * columnas];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			Output[i][j] = (Output[i][j] * kernel[0])+(Output[i+1][j]*kernel[1])+(Output[i+2][j]*kernel[2]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << Output[i][j] << " ";
		}
		cout << endl;
	}
}