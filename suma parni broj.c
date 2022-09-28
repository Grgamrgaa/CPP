#include <stdio.h>
#include <stdlib.h>
int sum(int a){
    a=a%2==1?a-1:a;
return a==2?2:a+sum(a-2);
}
int main()
{
    int n;
    printf("Unesi neki broj\n");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
