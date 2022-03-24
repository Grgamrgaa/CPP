#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, fac=1, br=0;

    do{
    printf("Unesi broj\n");
    scanf("%d", &n);
    if(n<0){printf("Error\n");
    if(br>5) printf("Unesi pozitivan %d\n",br);
    }
    br++;

    }while (n<0);
    i=n;
    while(i)
        fac*=i--;
    printf("faktoriel broja %d je %d",n, fac);














    return 0;
}
