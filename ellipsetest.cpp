#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<iostream>
#include"circ.h"
#include"Ellipse.h"

using namespace std;

int main()
{
    int gdriver = DETECT, gmode, errorcode;

    initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

    int x=120;
    int y=80;
    int r=15;
    while(1)
    {
        int i=0;

        while(i<360)
        {
            drawcircle(r,320+x*cos(i*3.14/180),240+y*sin(i*3.14/180));
            drawellipse(320,240,x,y);
            delay(50);
            cleardevice();
            i++;
        }

    }

    getch();
    closegraph();
}
