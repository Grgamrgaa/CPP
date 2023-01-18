
    #include <stdio.h>
#include <stdlib.h>

struct nosorog {
    int masa;
    int max_brzina;
    int sila_udarca;
    char boja[23];
    char ime[421];
};

int main()
{
    struct nosorog ns[3]={5000,30,600,"rejnbow","milorad"
    ,5590,50,900,"braun","zvonko"
    };




   printf("Ovaj nosorog je tvoj daj mu sve zadane atribute (masu,maxx_brzineu,silu_sudara,boju,ime):\n");
   scanf("%d %d %d %s %s",&ns[2].masa, &ns[2].max_brzina, &ns[2].sila_udarca, ns[2].boja, ns[2].ime);

    if(ns[0].sila_udarca>ns[1].sila_udarca && ns[0].sila_udarca>ns[2].sila_udarca){
        printf("najjaci je %s nosonja %s boje",ns[0].ime,ns[0].boja);
    }else if (ns[1].sila_udarca>ns[0].sila_udarca && ns[1].sila_udarca>ns[2].sila_udarca){
        printf("najjaci je %s nosonja %s boje",ns[1].ime,ns[1].boja);}
    else if (ns[2].sila_udarca>ns[1].sila_udarca && ns[2].sila_udarca>ns[0].sila_udarca){
        printf("najjaci je %s nosonja %s boje",ns[2].ime,ns[2].boja);}
    else if (ns[0].masa>ns[1].masa && ns[0].masa>ns[2].masa){
    printf("najjaci je %s nosonja %s boje",ns[0].ime,ns[0].boja);}
    else if (ns[1].masa>ns[0].masa && ns[1].masa>ns[2].masa){
    printf("najjaci je %s nosonja %s boje",ns[1].ime,ns[1].boja);}
    else if (ns[2].masa>ns[0].masa && ns[2].masa>ns[1].masa){
    printf("najjaci je %s nosonja %s boje",ns[2].ime,ns[2].boja);}

    return 0;

}
