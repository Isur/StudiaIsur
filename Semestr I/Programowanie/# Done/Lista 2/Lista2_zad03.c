#include<stdio.h>
#include<stdlib.h>
/*
Napisz program, który podbiera od użytkownika macierz wymiaru 2 na 2. Oblicza
jej wyznacznik, oraz w przypadku gdy jest on niezerowy wypisuje macierz odwrotną
do podanej macierzy
*/
main()
{
	double matrix[2][2] = { 0 }, inverseMatrix[2][2] = { 0 };		// Tablice dla macierzy i jej odwrtotnej,
	double determinant = 0;											// wyznacznik
	int i = 0, j = 0;												// zmienne pomocnicze
	
	for (i = 0; i < 2; i++)											// Pobieranie wartosci do macierzy od uzytkownika
	{
		for (j = 0; j < 2; j++)
		{
			printf("\n Podaj wartosc macierzy dla pozycji [%d][%d] \t", i, j);
			scanf("%lf", &matrix[i][j]);
		}
	}
	determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);	// Wyznaczanie wyznacznika
	// Wyswietlanie macierzy
	printf("\n Twoja macierz to: \n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf(" [%.2lf] ", matrix[i][j]);
		}
		printf("\n");
	}
	// Sprawdzanie czy macierz ma macierz odwrotna i tworzenie/wyswietlanie jej.
	if (determinant == 0)
	{
		printf("\n Wyznacznik macierzy wynosi zero! \nTwoja Macierz nie ma macierzy odwrotnej!\n");
	}
	else
	{
		printf("\n Twoj wyznacznik to: %lf\n", determinant);
		inverseMatrix[0][0] = matrix[1][1] * (1 / determinant);
		inverseMatrix[0][1] = -matrix[0][1] * (1 / determinant);
		inverseMatrix[1][0] = -matrix[1][0] * (1 / determinant);
		inverseMatrix[1][1] = matrix[0][0] * (1 / determinant);
		printf(" Twoja macierz odwrotna to: \n");
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				printf(" [%.2lf] ", inverseMatrix[i][j]);
			}
			printf("\n");
		}
	}
	system("PAUSE");
	return 0;
}