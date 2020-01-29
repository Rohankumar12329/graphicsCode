#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<iostream>

using namespace std;

void drawEllipse(int x, int y, int a, int b)
{
    putpixel(a+x,b-y, WHITE);
    putpixel(a+x,b+y, WHITE);
    putpixel(a-x, b-y, WHITE);
    putpixel(a-x, b+y, WHITE);
}

void ellipseDraw(int a,int b,int a1 =320, int b1 =240)
{

	int x=0;
	int y=b;
	int d=0;

	x=a;
	y=0;
	d=a*a+(b*b)/4 -a*b*b;
	drawEllipse(x, y, a1, b1);
	while(a*a*y<b*b*x)
	{
		if(d<=0)
		d+=a*a*(2*y+3);
		else
		{
			d+=a*a*2*(y+3)+b*b*(-2*x+2);
			x--;
		}
		y++;
		drawEllipse(x, y, a1, b1);
		delay(50);
	}
	x=0;
	y=b;
	d=0;
	drawEllipse(x, y, a1, b1);
	while(a*a*y>=b*b*x)
	{
		if(d<=0)
		d+=b*b*(2*x+3);
		else
		{
			d+=b*b*2*(x+3)+a*a*(-2*y+2);
			y--;
		}
		x++;
		drawEllipse(x, y, a1, b1);
		delay(50);
	}
}



int main()
{
    int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode,"C:\\TURBOC3\\BGI");
	ellipseDraw(120,80);

    getch();
    closegraph();
    return 0;
}

