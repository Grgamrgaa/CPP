#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d=1;
    int i;
    int temp;
    int a[5];
    for(i=0;i<5;i++){
        printf("Unesi broj\n");
        scanf("%d", &a[i]);
    }while(d){
        d=0;
    for(i=0;i<4;i++){
        if(a[i]>a[i+1]){
        d=1;
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
        }
    }

  for(i=0;i<5;i++){
printf("%d\n", a[i]);
  }
    return 0;
}
