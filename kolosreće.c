#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SECTORS 6   // Broj sektora na kolu

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;
    int radius = 200;
    int sectorAngle = 360 / NUM_SECTORS;

    // Definiranje boja za svaki sektor
    int colors[NUM_SECTORS] = {RED, GREEN, BLUE, YELLOW, CYAN, MAGENTA};

    int rotationSpeed = 5;  // Brzina rotacije kola
    int rotationAngle = 0;  // Trenutni kut rotacije

    while (!kbhit()) {
        // Crtanje kola sreæe
        cleardevice();

        // Rotiranje kola
        rotationAngle += rotationSpeed;
        if (rotationAngle >= 360) {
            rotationAngle = 0;
        }

        // Crtanje sektora
        for (int i = 0; i < NUM_SECTORS; i++) {
            setfillstyle(SOLID_FILL, colors[i]);
            int startAngle = (i * sectorAngle + rotationAngle) % 360;
            int endAngle = ((i + 1) * sectorAngle + rotationAngle) % 360;
            pieslice(centerX, centerY, startAngle, endAngle, radius);
        }

        delay(100);  // Odgoda za prikaz animacije
    }

    closegraph();
    return 0;
}

