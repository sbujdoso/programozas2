#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
struct kocsi //int
{
		char VN[100];
		float ar;
		int kerek;
};
	
int main()
{
		struct kocsi Lada[2];
		int i;

		strcpy(Lada[0].VN,"HZ");
		Lada[0].ar=1011.010;
		Lada[0].kerek=4;

		strcpy(Lada[1].VN,"tZ");
		Lada[1].ar=2011.010;
		Lada[1].kerek=3;

		for(i=0; i<2; i++) printf("%s\t%.3f\t%d\t%c\n", Lada[i].VN, Lada[i].ar, Lada[i].kerek, Lada[i].VN[0]);

		system("PAUSE");
}
