#include <stdio.h>
#include <stdlib.h>

void own_strcat(char *, char *);

int main(){
    char ch1[20] = "alma";
    char ch2[20] = "fa";
    printf("%s, %s\n", ch1, ch2);
    own_strcat(ch1,ch2);
    printf("%s\n", ch1);
    system("PAUSE");
}


void own_strcat(char *s1, char *s2){
     int i=0;
     int end=0;
     while (1) {
           if (*(s1 +i) != '\0') i++;
           else break;
           }
     end = i;
     i = 0;
     while (1) {
           if (*(s2 +i) != '\0') {
                    *(s1 + end + i ) = *(s2 +i);
                    i++;
                    }
           else break;
           }
     *(s2 + end + i) =  '\0';
     
     }