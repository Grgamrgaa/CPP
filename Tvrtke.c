#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a1;
    int a2;

    printf("Unesi prvu cijenu tvrtke");
    scanf("%d",&a1);
    printf("Unesi drugu cijenu tvrtke");
    scanf("%d",&a2);

    if(a1<a2){

            printf("Izabrali ste prvu tvrtku.",a1);}

    else{
            printf("Izabrali ste drugu tvrtku.",a2);
    }









    return 0;
}
