#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int x[1000];
    printf("unes kolko os brojeva");
    scanf("%d", &n);
       for(i=0;i<n;i++){
        scanf("%d", &x[i]);
        printf(x[i]%2==0?"%d":"",i);
       }
    return 0;
       }
