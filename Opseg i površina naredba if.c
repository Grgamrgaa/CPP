#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

     printf("Unesi stranicu a i b, \n");
     scanf("%d %d", &a, &b);
     if(a>b)
     {
         int P=a*b;
         printf("Povrsina je %d",P);

     }
     else
     {
         int O=2*(a+b);
         printf("Opseg je %d",O);
     }








    return 0;
}
