
#include <iostream>
#include <stdio.h>

using namespace std;
int biljeznice(float  n){

return (n*1000)/100;
}

int main()
{
    float kgpulpe;
    int n;
    printf ("unesi broj kilogram pulpe ");
    scanf("%f",&kgpulpe);
    n=biljeznice(kgpulpe);
    printf("moze proizvesti %d biljeznica",n);


}






