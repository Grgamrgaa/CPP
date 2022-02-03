#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a;

	printf("\nUčitaj stranicu a trokuta: ");
	scanf("%f", &a);
	printf("\nOpseg trokuta je : %.2f", 3*a);
	printf("\nPovršina trokuta je : %.2f", a*a*sqrt(3)/4);

    return 0;
}
