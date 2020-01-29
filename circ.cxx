#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<iostream>

using namespace std;

void circles(int x, int y,int x1,int y1)
{
    putpixel(x1+x,y1+(-y),WHITE);
    putpixel(x1+(-x),y1+y,WHITE);
    putpixel(x1+x,y1+y,WHITE);
    putpixel(x1+(-x),y1+(-y),WHITE);
    putpixel(x1+y,y1+(-x),WHITE);
    putpixel(x1+(-y),y1+(-x),WHITE);
    putpixel(x1+y,y1+x,WHITE);
    putpixel(x1+(-y),y1+x,WHITE);

}

void drawcircle(int r,int x1=320,int y1=240)
{
    int x=0;
    int y= r;
    int d= 1-r;
    circles(x,y,x1,y1);
    while(x<=y)
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
    }
}

int main()
{
    int gdriver = DETECT, gmode, errorcode;

    initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

    drawcircle(80);

    getch();
    closegraph();

}
