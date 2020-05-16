#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
struct szakasz
{
	float Ax;
	float Ay;
	float Bx;
	float By;
	float hossz;
};
	
int main()
{
		struct szakasz rud;
		scanf("%f,%f", &rud.Ax, &rud.Ay);
		scanf("%f,%f", &rud.Bx, &rud.By);

		rud.hossz = sqrt(pow(rud.Ax - rud.Bx,2) + pow(rud.Ay - rud.By, 2));
		printf("Rud koordinatai: %f,%f\t%f,%f, hossza:%f\n", rud.Ax, rud.Ay, rud.Bx, rud.By, rud.hossz);
		system("PAUSE");
}
