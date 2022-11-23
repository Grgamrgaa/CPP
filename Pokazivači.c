#include <stdio.h>
#include <stdlib.h>
void oisit(int a,int b,int n,int*jeli,int*ab){


    if(n>0){
        if(a>b){
            *jeli=1;
            *ab=a*b;}
    else if(a<b){
            *jeli=-1;
            *ab=(float)a/b;}
    else {
            *jeli=0;
            *ab=(float)a/b;}}

    else if(n<0){
        if(a<b){
            *jeli=1;
            *ab=a*b;}
    else if(a>b){
            *jeli=-1;
            *ab=(float)a/b;}
    else {
            *jeli=0;
            *ab=(float)a/b;}}
    else{
            *jeli=0;
            *ab=(float)a/b;
    }
}



int main()
{

float ab;
	int a,b,n;
	int jeli=0;
	printf("Unesi a b n \n");
	scanf("%d %d %d",&a, &b, &n);
	alslt(a,b,n,&jeli,&ab);
	if(jeli==-1)
	printf("anan>bnan",ab

	);
	else
	printf("bnan>anan",ab);











    return 0;
}
