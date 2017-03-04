#include "stdafx.h"
#include <string.h>
#include <iostream>
using namespace std;

int comb(int n, int k,int **mass)
{
	if (mass[k][n] >= 0)
		return mass[k][n];

	if (k == 0 || n == k)
		mass[k][n] = 1;
	else
		if (k > n)
			mass[k][n] = 0;
		else
			if (k == 1)
				mass[k][n] = n;
			else
				mass[k][n] = comb(n - 1, k - 1,mass)+comb(n - 1, k, mass);
	return mass[k][n];
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k;
	int **mass;
	int key = 0;
	const int size = 1000;

	mass = (int**)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
	{
		mass[i] = (int*)malloc(size * sizeof(int));
		memset(mass[i],-1,size*sizeof(int));
	}
		
	printf("Введите k\n");
	scanf_s("%d", &k);

	printf("Введите n\n");
	scanf_s("%d", &n);

	printf("Количество сочетаний\n%d", comb(n, k, mass));

	for (int i = 0; i < size; i++)
		free(mass[i]);
	free(mass);

	getchar();
	getchar();
    return 0;
}
