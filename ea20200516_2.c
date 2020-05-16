#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
		FILE *fajl;
		fajl = fopen("adat.txt","r");
		int elem;

		//statikusan foglalt vektor
		int vektor[100];
		int i,j;

		i=0;

		while(!feof(fajl))
		{
				fscanf(fajl, "%d", &elem);
				vektor[i]=elem;
				i++;
		}
		printf("i-nek értéke: %d\n", i);
		for( j=0; j<i; j++) printf("vektor[%d]:%d\n",j, vektor[j]);
}
