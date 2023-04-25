#include <graphics.h>
#include <math.h>
#include <time.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   while (1)
   {
      cleardevice();

      // dobivanje trenutnog vremena
      time_t rawtime;
      struct tm * timeinfo;
      time(&rawtime);
      timeinfo = localtime(&rawtime);

      // dobivanje kutova kazaljki
      double hour_angle = (timeinfo->tm_hour % 12 + timeinfo->tm_min / 60.0) / 12.0 * 2 * M_PI;
      double minute_angle = (timeinfo->tm_min + timeinfo->tm_sec / 60.0) / 60.0 * 2 * M_PI;
      double second_angle = timeinfo->tm_sec / 60.0 * 2 * M_PI;

      // crtanje satnog okvira
      circle(getmaxx() / 2, getmaxy() / 2, 150);
      circle(getmaxx() / 2, getmaxy() / 2, 5);

      // crtanje kazaljki
      line(getmaxx() / 2, getmaxy() / 2,
           getmaxx() / 2 + 100 * sin(hour_angle),
           getmaxy() / 2 - 100 * cos(hour_angle));
      line(getmaxx() / 2, getmaxy() / 2,
           getmaxx() / 2 + 120 * sin(minute_angle),
           getmaxy() / 2 - 120 * cos(minute_angle));
      line(getmaxx() / 2, getmaxy() / 2,
           getmaxx() / 2 + 140 * sin(second_angle),
           getmaxy() / 2 - 140 * cos(second_angle));

      delay(1000);
   }

   getch();
   closegraph();

   return 0;
}

