#include <stdio.h>
#include <stdlib.h>

int main()
{

    int p;
    int z;
    int b;
    int sum;

    printf("Unesi neki broj:");
    scanf("%d",&b);

    z=b%10;

    while(b>10){
        b/=10;

    }

    p=b;
    sum=p+z;

    printf("Suma brojeva iznosi: %d",sum);








    return 0;
}
