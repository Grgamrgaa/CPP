#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int pronadi(int A[],int n){

int i;
for(i=0;i<n;i++)
if(A[i]%3==0) return i;
return -1;
}

int main()
{
    time_t t;
    int n,i;
    int polje[50];
srand((unsigned) time(&t));


printf("koliko zelis brojeva? ");
scanf("%d",&n);

for(i=0;i<n;i++)
    polje[i]=rand()%21+5;


   for(i=0;i<n;i++)
    printf("%d\n",polje[i]);


int index=pronadi(polje,n);
printf("%d\n",index);

    return 0;



