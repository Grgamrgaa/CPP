#include <stdio.h>

void main()
{
    int broj;

    printf("\nUnesi cijeli broj: ");
    scanf("%d", &broj);

    if(broj % 2 != 0)
        printf("\nBroj je neparan");
       if(broj % 2 != 1  )
        printf("\nBroj je paran");

    return 0;
}

