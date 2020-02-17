#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
    char szo[4];
    char szo2[100];
    szo[0] = 'a';
    szo[1] = 'l';
    szo[2] = 'm';
    szo[3] = 'a';
    printf("szo[4]:%c%c%c%c\n", szo[0], szo[1], szo[2], szo[3]);

    printf("Kerek egy szot:");
    // Igy nem lehet beolvasni tobb szot, a szokozt ertelmezi!
    scanf("%s",szo2);
    printf("Ezt irtad be:%s\n", szo2);
    printf("masodik karakter: %c\n", szo2[1]);
    // AZ elemek elerhetok vektorkent!
    szo2[1]='-';
    printf("masodik karakter: %c\n", szo2[1]);
    printf("Ezt irtad be:%s\n", szo2);
    
    
    // string.h
    char str1[20]="alma"; //string ertekadas ilyen formaban csak letrehozaskor lehet!
    char str2[20]="fa";
    printf("%s %s\n", str1, str2);
    
    //strcpy: str1-be masolja str2-t.
    strcpy(str1, str2);
    printf("%s %s\n", str1, str2);
    
    // string kesobbi értékadas
    strcpy(str1, "eper"); 
    printf("%s %s\n", str1, str2);
    
    //strcat: str1-be masolja a vegere str2-t
    strcat(str1, str2);
    printf("%s %s\n", str1, str2);
    
    //strlen: milyen hosszu a string \0 nelkul
    printf("str1 hossza jelenleg:%d \n", (int)strlen(str1));

    //strcmp: osszehasonlit ket stringet.
    char s1[20]="egy";
    char s2[20]="egy";
    printf("s1 s2 osszehasonlitasa: %i\n", strcmp(s1, s2));
    
    //sprintf: formazott kiiras stringbe
    char s3[20];
    sprintf(s3,"%d", 1980);
    printf("s3:%s\n", s3);
    
    
    system("PAUSE");
}
