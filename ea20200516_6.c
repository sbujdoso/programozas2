#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* Korok metszespontja feladat */

struct Kor
{
	float x,y,rad;
};


void Fill_Kor(struct Kor*);
void Print_Kor(struct Kor);

int Calc_Kor(struct Kor, struct Kor);
	
int main()
{
		struct Kor A,B;
		Fill_Kor(&A);
		Fill_Kor(&B);

		Print_Kor(B);
		printf("A ket kor metszi egymast: %d\n", Calc_Kor(A,B));

		system("PAUSE");
}


void Fill_Kor(struct Kor* C)
{
		printf("Kerem a kor:x,y ");
		scanf("%f,%f", &C->x, &C->y);
		printf("\nKerem a kor:radius ");
		scanf("%f", &C->rad);
}

void Print_Kor(struct Kor C)
{
		printf("Kor: x=%f, y=%f, rad=%f\n", C.x, C.y, C.rad);
}


int Calc_Kor(struct Kor C, struct Kor D)
{
		//0 ha nem metszi, 1 ha metszi
		//TODO: nincs implementalva ha az egyik kor benne van a 
		//masikban!!
		float tav, sumRad;
		tav = sqrt(pow(C.x - D.x, 2) + pow(C.y - D.y,2));
		sumRad = C.rad + D.rad;
		if (tav> sumRad) return 0;
		return 1;
}
