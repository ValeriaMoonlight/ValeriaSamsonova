#include <stdio.h>
#include "vector.h"

int main()
{
	Vector vec,zerovec,unitvec,sumvec,subvec,multvec,vecmult;
	vec = createVectorByCoord(1,2,3);
	zerovec = createZeroVector();
	unitvec = createUnitVector();
	multvec = multVectorByNumber(vec,2);
	sumvec = sumOfVectors(vec, unitvec);
	subvec = subOfVectors(vec, unitvec);
	vecmult = vectorMultOfVector(vec, unitvec);

	printf("vec: %s\n", vec.str);
	printf("zerovec: %s\n", zerovec.str);
	printf("unitvec: %s\n", unitvec.str);
	printf("sumvec: %s\n", sumvec.str);
	printf("subvec: %s\n", subvec.str);
	printf("scalar mult vec and unitvec: %d\n", scalarMultOfVector(vec,unitvec));
	printf("vector mult vec and unitvec: %s\n", vecmult.str);

	if (equalVectorsVector(vec, unitvec))
		printf("Equal\n");
	else
		printf("Notequal\n");

	if (equalVectorsVector(vec, vec))
		printf("Equal\n");
	else
		printf("Not equal\n");

	desposeVector(&vec);
	desposeVector(&zerovec);
	desposeVector(&unitvec);
	desposeVector(&sumvec);
	desposeVector(&subvec);
	desposeVector(&multvec);
	desposeVector(&vecmult);
	getchar();
	return 0;
}
