#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include"parabola.h"
#include"line.h"
#include"CircleHeader.h"

int main()
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode,"C:\\TURBOC3\\BGI");

    int x=320,y=240;
    parabola(20,x,y);
    linee(x,x+30,y,y);
    linee(x-20,x-60,y-10,y-10);

    getch();
   closegraph();
}

