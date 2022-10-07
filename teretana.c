#include <stdio.h>
#include <stdlib.h>
int teretana(int x,int y,int z){

 if(x+y<=z)
return 2;
else if(x<=z)
    return 1;
    else
    return 0;
}

int main()
{
  int x;
  int y;
  int z;
  printf("unesi koliko eura kosta teretana");
  scanf("%d",&x);
    printf("unesi koliko eura kosta privatni trener");
  scanf("%d",&y);
    printf("unesi koliko eura ima dominik");
  scanf("%d",&z);
 printf("%d" ,teretana(x,y,z));

}
