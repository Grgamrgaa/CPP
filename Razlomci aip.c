#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int a;
int b;
int c;
int d;

printf("Unesi a, b, c, d\n");
scanf("%d %d %d %d",&a,&b,&c,&d);
int x=b==d?a+c:a*d+c*b;
int y=b==d?d:b*d;

printf("Rezultat zbrajanja je %d / %d \n",x,y);
printf("Rezultat zbrajanja je %.2f\n",(float) x/y);









    return 0;
}
