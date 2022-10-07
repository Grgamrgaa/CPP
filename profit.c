#include <stdio.h>

int Profit(int n){
    int profitpercup=50*0.3;
    int rezultat = n*profitpercup;

return rezultat; }

int main(){


 int n;

 scanf("%d", &n);
 printf("profit je %d",Profit(n));



}
