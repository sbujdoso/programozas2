#include <stdio.h>
#include <stdlib.h>

int main(){
    int alma;
    alma = 5;
    printf("memoria cim alma: %p \n", &alma);
    printf("alma erteke: %d \n\n", alma);
    
    //Pointer muvelet: korte pointer mutasson az almara!
    int *korte;
    korte = &alma;
    printf("memoria cim korte: %p \n", &korte);
    printf("korte erteke: %p \n", korte);
    printf("korte altal mutatott ertek: %d \n\n", *korte);
    
    // Korte erteket noveljuk.....
    (*korte) ++;
    printf("Korte novelese eggyel: % d\n", *korte);
    //                       ..... alma erteke is valtozik!
    printf("alma erteke: %d \n\n", alma);
    
    //Vektorok:
    int alm[5];
    int i;
    for(i=0; i<5; i++) alm[i] = i ;
    
    // Pointer segítségével kiíratjuk
    int *pointer;
    pointer = &alm[0];
    //                                  ........--> memoriacimet noveljuk i-vel, majd 
    //                                 \|/      az altala mutatott erteket adja vissza 
    for(i=0; i<5; i++) printf("%d\t", *pointer+i);
    
    
    system("PAUSE");
}