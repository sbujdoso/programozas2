#include <stdlib.h>
#include <stdio.h>

void fgv(char *a)
{
		printf("string:%s\n", a);
}

int main()
{
		int alma=5;
		int* korte;
		int* eper;
		eper=&alma;
		korte=&alma;
		*eper=(*korte)+(*eper);
		printf("%d\n",(*eper));

		char adatok[10]="bla-bla";
		fgv(adatok);
}
