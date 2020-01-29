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


int main()
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode,"C:\\TURBOC3\\BGI");
    int r=80;
    int s=320-r,e=320+r;
    //drawcircle(r);
    while(1)
    {

        int i=s;
        int j=0;
        int y1=240,y2=240;
        while(j<(e-s)/2)
        {
            drawcircle(r);
            red(i,y1,y2);
            delay(50);
            cleardevice();
            i++;
            j++;
            y1--;
            y2++;
        }
        while(i<=e)
        {
            drawcircle(r);
            red(i,y1,y2);
            delay(50);
            cleardevice();
            i++;
            y1++;
            y2--;
        }

    }

    getch();
    closegraph();
    return 0;
}

