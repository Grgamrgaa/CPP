#include <stdio.h>
#include <stdlib.h>
int hrana(int x){

return(x*0.1)<10;
}

int main()
{
   int x;
   printf ("unesi koliko kosta hrana ");
   scanf("%d",&x);
   printf(hrana(x)?"popust od 10 kn je maksimalni":"popust od 10posto je maksimalni");
}
