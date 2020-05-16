#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct pont
{
		float x;
		float y;
};

struct szakasz
{
	struct pont A,B;
	float hossz;
};
	
int main()
{
		struct szakasz rud;
		scanf("%f,%f", &rud.A.x, &rud.A.y);
		scanf("%f,%f", &rud.B.x, &rud.B.y);

		rud.hossz = sqrt(pow(rud.A.x - rud.B.x,2) + pow(rud.A.y - rud.B.y, 2));
		printf("Rud koordinatai: %f,%f\t%f,%f, hossza:%f\n", rud.A.x, rud.A.y, rud.B.x, rud.B.y, rud.hossz);
		system("PAUSE");
}
