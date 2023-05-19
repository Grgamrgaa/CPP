#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int x = getmaxx() / 2;
    int y = getmaxy() / 2;
    int side = 200;  // Duljina stranice baze piramide
    int height = 150;  // Visina piramide

    // Koordinate vrha piramide
    int topX = x;
    int topY = y - height;

    // Koordinate baze piramide
    int baseX1 = x - side / 2;
    int baseY1 = y + height / 2;
    int baseX2 = x + side / 2;
    int baseY2 = baseY1;
    int baseX3 = x;
    int baseY3 = y + height;
    char c;
    int v=0;
    do{

	c=getch();
	cleardevice();
	switch(c){
		case '+': v-=10; break;
		case '-': v+=10; break;
		default:break;
	}
    // Crtanje linija za èetverostranu piramidu
    line(baseX1, baseY1, baseX2, baseY2);
    line(baseX2, baseY2, baseX3, baseY3);
    line(baseX3, baseY3, baseX1, baseY1);
    line(baseX1, baseY1, topX, topY+v);
    line(baseX2, baseY2, topX, topY+v);
    line(baseX3, baseY3, topX, topY+v);
	}while(1);
    getch();
    closegraph();
    return 0;
}

