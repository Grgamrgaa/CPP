#include <stdio.h>
#include <stdlib.h>
int sum(int a){
 return a==1?1:a+sum(a-1);

}
int main()
{
    int n;

    printf("Unesi neki broj\n");
    scanf("%d",&n);
    printf("%d",sum(n));










    return 0;
}
