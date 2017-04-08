#ifndef VECTOR_H
#define VECTOR_H

typedef struct Vector_struct
{
	int x;
	int y;
	int z;
	char *str;
} Vector;

Vector createVectorByCoord(int x, int y, int z);
Vector createZeroVector();
Vector createUnitVector();
Vector sumOfVectors(Vector vec1, Vector vec2);
Vector subOfVectors(Vector vec1, Vector vec2);
Vector multVectorByNumber(Vector vec, int number);
int scalarMultOfVector(Vector vec1, Vector vec2);
Vector vectorMultOfVector(Vector vec1, Vector vec2);
int equalVectorsVector(Vector vec1, Vector vec2);
char *vectorToString(Vector vec);
void desposeVector(Vector *vec);

#endif
