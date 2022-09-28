#include <stdio.h>
#include <stdlib.h>
int niz(int a, int b, int c){
int f1,  f2,  f0;
f2=a+b;
if(c==1||c==2)return 1;
if(c==3)return f2;
else return niz(b,f2,c-1);
}
int main()
{
  int n;
  printf("Unesi jedan broj\n");
  scanf("%d",&n);
  printf("%d", niz(1,1,n));


    return 0;
}
