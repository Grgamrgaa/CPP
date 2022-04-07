#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

int n,m=0,sum=0;
printf("Unesi broj\n");
scanf("%d",&n);
while (n){
m=m*10+n%10;
n/=10;
}
while (m){
scanf("%d",&n);
sum+=n*(m%10);
m/=10;
}
printf("%d \n",sum);
return 0;
}


