#include <graphics.h>
#include <dos.h>

void drawMan(int x, int y)
{
    // glava
    circle(x, y - 90, 20);

    // linija tijela
    line(x, y - 70, x, y);

    // ruke
    line(x - 1, y - 60, x - 30, y - 20);
    line(x + 1, y - 60, x + 30, y - 20);

    // noge
    line(x - 1, y, x - 30, y + 30);
    line(x + 1, y, x + 30, y + 30);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 100, y = 300;

    while (1) {
        cleardevice();
        drawMan(x, y);

        // pomicanje èovjeèuljka
        x += 5;

        if (x > getmaxx()) {
            x = 0;
        }

        delay(100);
    }

    getch();
    closegraph();
    return 0;
}

