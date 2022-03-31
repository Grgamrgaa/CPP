#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

	int n,masa,count=1;
	int sum=0;

	printf("\tUnes n\t\n");
	scanf("%d",&n);

	while(n>0){
		printf("Unesi masu\n");
		scanf("%d",&masa);
		n--;
		printf("%d\n",sum);
		if(sum+masa>1000){
			sum=masa;

			count++;
		}
		else sum+=masa;
}



	printf("Potrebno nam je puno sanduka, tocnije %d", count);



}
