#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F;
    float K;
    float C;
    printf("Upisi Fn stupnjeve");
    scanf("%d",&F);

     C=(F-32)*9/5;
    C=K+273.15;

    printf("Temperatura u Celzijevim stupnjevima je %.2f\n", C);
    printf("Temperatura u Kelvinima stupnjevima je %.2f\n", K);

    return 0;
}
