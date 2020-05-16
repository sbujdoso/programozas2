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
		struct kocsi Lada;
		strcpy(Lada.VN,"HZ");
		Lada.ar=1011.010;
		Lada.kerek=4;
		printf("%s\t%.3f\t%d\n", Lada.VN, Lada.ar, Lada.kerek);

		system("PAUSE");
}
