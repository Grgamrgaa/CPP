#include <stdio.h>
#include <stdlib.h>
float calc(float a,char o, float b){
if(o=='-')
    return (a-b);
else if (o=='+')
    return (a+b);
else if (o=='*')
    return (a*b);
else
    return (a/b);
}


int main()
{
   float a;
   char o;
   float b;
   printf("unesi neki broj");
   scanf("%f",&a);
   printf("unesi neku matematicku operaciju");
   scanf(" %c",&o);
   printf("unesi neki broj");
   scanf("%f",&b);
   printf("rezultat je %f",calc(a,o,b));

return 0;
}
