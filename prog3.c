#include <stdio.h>
#include <stdlib.h>

//Fuggveny prototipus deklaraciok
int fgv(int);
void fgvp(int *);

int main(){
    int alma;
    alma = 1;
    printf("alma cime a main()-ben: %p\n", &alma);
    printf("1. %d\n", alma);
    fgv(alma);
    printf("4. %d\n", alma);
    
    //Modositas:
    alma = fgv(alma);  
    printf("5. %d\n", alma);
    
    printf("alma = 1 ujrakezdjuk\n");
    alma = 1;
    //Pointerrel:
    fgvp(&alma);
    printf("9. %d  <-ujra a main()-ben\n", alma);
    system("PAUSE");
}

/*
 * Fuggveny deklaraciok:
 */


//visszateresi ertekkel adjuk vissza az eredmenyt:
int fgv( int alma){
    printf("alma cime a fgv()-ben: %p\n", &alma);
    printf("2. %d\n", alma);
    alma++;
    printf("3. %d\n", alma);
    return alma;
}

//pointerrel adjuk vissza az eredmenyt
void fgvp(int * alma) {
     printf("fgvp fuggvenyben: \n");
    printf("7. %d\n", *alma);
    (* alma)++;
    printf("8. %d\n", *alma);
}
