#include<stdio.h>

int main(){

    int P1;
    int P2;
    int P3;
    int P4;
    int count=0;

    printf("Unesi zadatke u  prvom tjednu: \n");
    scanf("%d", &P1);
    printf("Unesi zadatke u  drugom tjednu: \n");
    scanf("%d", &P2);
    printf("Unesi zadatke u  trecem tjednu: \n");
    scanf("%d", &P3);
    printf("Unesi zadatke u  cetvrtom tjednu: \n");
    scanf("%d", &P4);

    if(P1>=10){

        count+=1;
    }
     if(P2>=10){

        count+=1;
    }
      if(P3>=10){

        count+=1;
    }
    if(P4>=10){

        count+=1;
    }

    printf("Ivan je postigao svoj cilj u %d tjedna",count);


}
