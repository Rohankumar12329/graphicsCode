#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include<iostream>

void draw_ellipse1(int x1,int y1,int x,int y)
{
    putpixel(x1+x,y1-y,WHITE);
    putpixel(x1-x,y1+y,WHITE);
    putpixel(x1+x,y1+y,WHITE);
    putpixel(x1-x,y1-y,WHITE);
}



drawellipse(int x1,int y1,int a,int b)
{

    double d=  b*b + a*a*(b-0.5)*(b-0.5) - a*a*b*b;
    int x=0,y=b;
    while(2*b*b*x < 2*a*a*y)
    {
        if(d<=0)
        {
            d+=b*b*(2*x+3);
        }
        else
        {
            d+=b*b*(2*x+3)+a*a*(2-2*y);
            y--;
        }
        x++;
        draw_ellipse1(x1,y1,x,y);
    }

    d=b*b*(x+0.5)*(x+0.5)+a*a*(y-1)*(y-1)-a*a*b*b;
    while(y>0)
    {
        if(d>0)
        {
            d+=a*a*(3-2*y);
        }
        else
        {
            d+=b*b*(2*x-2)+a*a*(3-2*y);
            x++;
        }
        y--;
        draw_ellipse1(x1,y1,x,y);
    }
}
