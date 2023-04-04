#include <graphics.h>
#include <conio.h>

int main(void){
	int gd = DETECT, gm;
	int x=0,y=0,b=1;
	initgraph(&gd, &gm,(char*)"");
	char a;
	
	do{
		a=getch();
		if(a=="w") y-=1;
		if(a=="s") y+=1;
		if(a=="a") x-=1;
		if(a=="d") x+=1;
		if(a=="c") b=b==15?1:b+1;
		
	}
	
	
}
