#include <stdio.h>
#include <stdlib.h>

void fgv(float *, int);

int main(){
    
    float vektor[11];
    int i;
    srand(2);
    // ki kell nullazni
    for(i=0; i< 11; i++) vektor[i] = 0;
    //feltoltjuk veletlenszamokkal
    for(i=0; i< 10; i++) vektor[i] = (float) rand()/ RAND_MAX;
    //kiirjuk    
    for(i=0; i< 11; i++) printf("%2d. %f\n", i, vektor[i]);
    printf("----\n");
    
    // meghivjuk a fuggvenyt
    //fgv(&vektor[0], 11);
    // Index nelkul a vektor neve az elso elem memoria cime!!!
    fgv(vektor, 11);
    
    for(i=0; i< 11; i++) printf("%2d. %f\n", i,  vektor[i]);
    printf("----\n");
    
    system("PAUSE");
}

void fgv(float * vec, int len)
{
     int i;
      for(i=0; i< len-1; i++) *(vec+ len-1) = *(vec + len -1) + *(vec+i) ;
}