#include <stdio.h>
#include <stdlib.h>

int main()
{
  int*ptr;
  int n, i;

  printf("Unesi broj elemenata polja:");
  scanf("%d",&n);
  printf("Uneseni broj elemenata je: %d\n",n);
  ptr=(int*)malloc(n * sizeof(int));
  for(i=0;i<n;i++){
    printf("Unesi %d broj",i+1);
  scanf("%d",&ptr[i]);
  }
  for(i=0;i<n;i++){
    printf("\n%d",ptr[i]);
  }

    return 0;
}
