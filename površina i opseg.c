#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a, b, p, o;

     printf("\nUčitaj duljine stranica a i b: ");
     scanf("%f %f", &a, &b);

     p = a*b;
     o = 2*(a+b);

     printf("\Površina je %.2f\nOpseg je %.2f", p, o);

    return 0;
}
