#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[])
{
		float a,b;
		b = atof(argv[1]);

		a = 3;
		b = a * sqrt(b);

		printf("b: %f", b);
}
