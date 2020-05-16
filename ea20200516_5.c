#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
struct szakasz
{
	float A[2];
	float B[2];
	float hossz;
};
	
int main()
{
		struct szakasz rud;
		scanf("%f,%f", &rud.A[0], &rud.A[1]);
		scanf("%f,%f", &rud.B[0], &rud.B[1]);

		rud.hossz = sqrt(pow(rud.A[0] - rud.B[0],2) + pow(rud.A[1] - rud.B[1], 2));
		printf("Rud koordinatai: %f,%f\t%f,%f, hossza:%f\n", rud.A[0], rud.A[1], rud.B[0], rud.B[1], rud.hossz);
		system("PAUSE");
}
