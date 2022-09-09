#include<stdio.h>

int main(){

    int x;

    printf("Unesi kreditnu ocjenu: ");
    scanf("%d", &x);

    if(x<750){
        printf("\nNemate pristup");
    }else{
        printf("\nDobrodošli u KRED program");
    }

}
