#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    printf("------------------\n");
    printf("|\t\t\t|\n");
    printf("|\t 1.mnozenje\t|\n");
    printf("|\t\t\t|\n");
    printf("|\t 2.dijeljenje\t|\n");
    printf("|\t\t\t|\n");
    printf("|\t 3.zbrajanje|\n");
    printf("|\t\t\t|\n");
    printf("|\t 4.oduzimanje|\n");
    printf("|\t\t\t|\n");
    printf("------------------\n");


    int a,b;
    char unos[10];
    printf("odaberite operaciju");
    scanf("%s",unos);

    for(int i=0;unos[i]!='\0';i++){
        unos[i]=tolower(unos[i]);

    printf("unesi 2 broja");
    scanf("%d %d",&a,&b);
    float rezultat;

    if(strcmp(unos,"mnozenje")){//do mnozenje
        rezultat=a*b;
    }
    if(strcmp(unos,"dijeljenje")){
        rezultat=a/b;
    }
     if(strcmp(unos,"zbrajanje")){//do zbrajanje
        rezultat=a+b;
    }
     if(strcmp(unos,"oduzimanje")){//do oduzimanje
        rezultat=a-b;
    }


    printf("rezultat je %.2f",rezultat);

}
}

