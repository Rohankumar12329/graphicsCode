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

    while(1)
    {
        int i=0;

        while(i<360)
        {
            drawcircle(320+100*cos(i*3.14/180),240+50*sin(i*3.14/180),10);
            drawellipse(320,240,100,50);
            delay(50);
            cleardevice();
            i++;
        }

    }

    getch();
    closegraph();
}

