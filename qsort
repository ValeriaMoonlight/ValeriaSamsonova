#include "stdafx.h"
#include <time.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


void input(int *m, int size1)
{
	for (int i = 0; i < size1; i++)
		m[i] = rand() % 10;
}


void output(int *m, int size1)
{
	for (int i = 0; i < size1; i++)
		printf("%d\t", m[i]);
}

int compare(const void *i, const void *j)
{
	return (*(int*)i - *(int*)j);
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int *mas;
	int size;

	printf("Введите рзмер массива\n");
	scanf_s("%d", &size);
	mas = (int*)malloc(size*sizeof(int));

	input(mas, size);
	printf("Массив\n");
	output(mas, size);

	qsort(mas,size,sizeof(int),compare);

	printf("Отсортированный массив\n");
	output(mas, size);

	free(mas);

	getchar();
	getchar();

    return 0;
}
