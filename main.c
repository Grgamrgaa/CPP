#include <stdio.h>
#include <stdlib.h>

int main()
{

   int M;
   int N;
   int K;
   int O;
   int a;

   printf("Koliko prijatelja zeli upisati tecaj: ");
    scanf("%d", &N);
    printf("\nKoliki je maksimalan kapacitet: ");
    scanf("%d", &M);
    printf("\nKoliko prijatelja se upisalo na tecaj: \n");
    scanf("%d", &K);

   if(N<=M){
        printf("Prijatelji se mogu upisati.");
        a=M-N-K;
         printf("Ostalo je %d slobodnoh mjesta.", a);
    } else {
        printf("Ne mogu se svi prijatelji upisati.");
        O=N-M;
        printf("Ostalo ih je: %d", O);
    }













    return 0;
}
