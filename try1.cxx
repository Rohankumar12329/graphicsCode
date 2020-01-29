#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define p 3.14




void drawEllipse(int x, int y, int x1, int y1)
{
    putpixel(x1+x, y1+y, WHITE);
    putpixel(x1-x, y1+y, WHITE);
    putpixel(x1+x, y1-y, WHITE);
    putpixel(x1-x, y1-y, WHITE);
}


int main()
{
    int a=120;
    int b=80;
    int x1=320;
    int y1=240;
    int x=0;
    int y=b;
    double d= b*b + a*a/4 - a*a*b;
    drawEllipse(x, y, x1, y1);
    while(a*a*y>=b*b*x)
    {
        if(d<=0)
        {
            d+=b*b*(2*x+3);
        }
        else
		{
			d+=b*b*2*(x+3)+a*a*(-2*y+2);
			y--;
		}
		x++;
		drawEllipse(x, y, x1, y1);
		delay(50);
    }

    x=a;
	y=0;
	d=a*a+(b*b)/4 -a*b*b;
	drawEllipse(x, y, x1, y1);
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
		drawEllipse(x, y, x1, y1);
		delay(50);
	}
}
