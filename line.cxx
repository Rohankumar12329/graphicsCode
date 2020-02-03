#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include<iostream>

void lineex(int x1,int x2,int y1,int y2)
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
    int dx,dy,d,x,y;
    dx=x2-x1;
    dy=y1-y2;
    if((dy)<(dx))
    {
        d=2*dy-dx;
        x=x1;
        y=y1;
        putpixel(x,y,WHITE);
        while(x<=x2)
        {

            if(d < 0)
            {
                d+= 2*dy;
            }
            else
            {
                d += 2*(dy-dx);
                y--;
            }
            x++;
            putpixel(x,y,WHITE);
        }
    }
}


int main(void)
{
   int gdriver = DETECT, gmode, errorcode;
   int x2,y1,x1,y2;
   x1=320;
   y1=200;
   x2=380;
   y2=190;
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
   lineex(x1,x2,y1,y2);
   getch();
   closegraph();

   return 0;
}
