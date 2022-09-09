


 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int z;
    int a=0;

    printf("Unesi masu manga, kamiona i mosta\n");
    scanf("%d %d %d",&x, &y, &z);

    z=z-y;

    while (x<z){
      x+=z;
      a+=1;
    }

    printf("Maksimalan broj manga je: %d",x);


    return 0;
}
