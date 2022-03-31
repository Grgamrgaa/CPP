
#include <stdio.h>
#include <math.h>

int main(){

    int sum=0, i=10, n;

    while(i){
        scanf("%d", &n);
        sum+=n;
        i--;
    }
    printf("Ukupno:%d", sum);
    printf("prosjecno:%f",(float)sum/10);




}
