#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
		FILE *fajl;
		fajl = fopen("adat.txt","r");
		int elem;

		//dinamikusan foglalt vektor
		int* vektor;
		vektor =(int*) malloc(1*sizeof(int)); // == vektor[1]
		//vektor =(int*) calloc(1,sizeof(int)); // ugyan az csak ki van nullazva

		int i,j;

		i=0;

		while(!feof(fajl))
		{
				fscanf(fajl, "%d", &elem);
				vektor[i]=elem;
				//ezzel ekvinvalens: *(vektor + i)=elem

				i++;
				//újrafoglalás nagyobb meretre, a memoriat masolja!
				vektor=(int*)realloc(vektor, (i+1)*sizeof(int));
		}
		
		i--;

		printf("i-nek értéke: %d\n", i);
		for( j=0; j<i; j++) printf("vektor[%d]:%d\n",j, vektor[j]);
		free(vektor);
		system("PAUSE");
}
