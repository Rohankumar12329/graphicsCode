#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<iostream>
#include"circ.h"
#include"line.h"

using namespace std;

void red(int x,int y1,int y2)
{
    for(int i=y1; i<=y2; i++)
    {
        putpixel(x,i,RED);
    }
}

void yellow(int x,int y1,int y2)
{
    for(int i=y1; i<=y2; i++)
    {
        putpixel(x,i,YELLOW);
    }
}


int main()
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode,"C:\\TURBOC3\\BGI");
    int r=80;
    int x1=320-r,x2=320,x3=320+r;
    //drawcircle(r);
    while(1)
    {
        int x=x1;
        int y1=240,y2=240;
        while(x<x2)
        {
            drawcircle(r);
            red(x,y1,y2);
            if (x>(x1+20)){
                yellow(x-20,y1,y2);
            }
            delay(20);
            cleardevice();
            x++;
            y1--;
            y2++;
        }
        while(x<=x3)
        {
            drawcircle(r);
            red(x,y1,y2);
            if (x>(x2+20)){
                yellow(x-20,y1,y2);
            }
            delay(20);
            cleardevice();
            x++;
            y1++;
            y2--;
        }

    }

    getch();
    closegraph();
    return 0;
}

/*while(x<=y)
    {
        if(d<0)
            d+=2*x+3;
        else
        {
            d+= 2*x -2*y +5;
            y--;
        }
        x++;
        circles(x,y,x1,y1);
    }*/

