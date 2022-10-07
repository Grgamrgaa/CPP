#include <stdio.h>
#include <stdlib.h>
int nextgen(int a,int b,int x,int y){

return(a*b)<=(x*y);


}

int main()
{
    int a;
    int b;
    int y;
    int x;
    printf("Unesi jedinicu energije");
    scanf("%d",&a);
    printf("Unesi godine");
    scanf("%d",&b);
    printf("Unesi grame");
    scanf("%d",&x);
    printf("Unesi jedinicu energije grama helija");
    scanf("%d",&y);
    printf(nextgen(a,b,x,y)?"projekt moze napajati dovoljno":"projekt nemoze napajati dovoljno");


    return 0;
}
