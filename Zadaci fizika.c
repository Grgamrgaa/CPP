#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, k;
    int A1, A2, A3, A4, A5;
    int B,br=0;

    printf ("Koliko ima zadatka u zbirci:\n");
    scanf("%d", &N);
    printf ("Koliko zadataka Josip zna:\n");
    scanf("%d", &k);
    printf ("Koje je zadatke profesorica odabrala:\n");
    scanf ("%d %d %d %d %d", &A1, &A2, &A3, &A4, &A5);

    while (k)
    {
        k--;
        scanf("%d",&B);

        if(B==A1||B==A2||B==A3||B==A4||B==A5) br+=1;
    }
    br=br==0?1:br;
    printf("Jole je dobio %d",br);

}

