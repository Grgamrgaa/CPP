#include <graphics.h>
#include <conio.h>

int main(void) {
    int gd = DETECT, gm;
	 int i;
	 initgraph(&gd, &gm, "C:\\TC\\BGI");
	 setbkcolor(0);
	 cleardevice();
	 setfillstyle(1, 14);
	 
	 for(;;){
	 	for(i = 0; i < 350; i++){
	 		pieslice(200 + i, 240, 30 - i % 31, 330 + i % 31, 50);
	 		delay(5);
	 		cleardevice();
		 
	 }   
	 
	 for(i = 0; i < 160; i++){
	 		pieslice(550, 240 + i, 300 - i % 31, 240 + i % 31, 50);
	 		delay(5);
	 		cleardevice();
		 
	 }   
       
    for(i = 0; i < 350; i++){
	 		pieslice(550 - i, 400, 210 - i % 31, 150 + i % 31, 50);
	 		delay(5);
	 		cleardevice();
		 
	 }   

    for(i = 0; i < 160; i++){
	 		pieslice(200, 400 - i, 120 - i % 31, 60 + i % 31, 50);
	 		delay(5);
	 		cleardevice();
		 
	 }  
	 
}
getch();
closegraph();

return 0;
}
