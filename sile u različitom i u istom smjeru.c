#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int F1;
int F2;

//scan F1 F2
//a dio F1+F2
//b dio F1-F2
//c R=sqrt (F2*F2 + F1*F1)
    printf("Unesi F1 i F2\n");
    scanf("%d %d", &F1, &F2);

    printf("Rezultantna sila kada su sile u istom smjeru iznosi: %d N\n", F1+F2);

    printf("Rezultantna sila kada su sile u razlièitom smjeru iznosi: %d N\n", F1-F2);

    printf("Rezultantna sila kada su sile pod kutom od 90 stupnjeva iznosi: %.2f N\n", sqrt (F2*F2 + F1*F1) );






    return 0;
}
