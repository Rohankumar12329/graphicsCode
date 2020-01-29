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
void circles3(int x, int y,int x1,int y1)
{
    putpixel(x1+x,y1+(-y),BLACK);
    putpixel(x1+(-x),y1+y,BLACK);
    putpixel(x1+x,y1+y,BLACK);
    putpixel(x1+(-x),y1+(-y),BLACK);
    putpixel(x1+y,y1+(-x),BLACK);
    putpixel(x1+(-y),y1+(-x),BLACK);
    putpixel(x1+y,y1+x,BLACK);
    putpixel(x1+(-y),y1+x,BLACK);

}
void circles2(int x, int y,int x1,int y1)
{
    putpixel(x1+x,y1+(-y),BLACK);
    putpixel(x1+(-x),y1+y,BLACK);
    putpixel(x1+x,y1+y,BLACK);
    putpixel(x1+(-x),y1+(-y),BLACK);
    putpixel(x1+y,y1+(-x),BLACK);
    putpixel(x1+(-y),y1+(-x),BLACK);
    putpixel(x1+y,y1+x,BLACK);
    putpixel(x1+(-y),y1+x,BLACK);

}

void Makecircle(int r,int x1=320,int y1=240)
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
    /*int i =r-1;
    x=0;
    y= i;
    d= 1-i;
    circles3(x,y,x1,y1);
    circles3(x-1,y-1,x1,y1);
    circles3(x-2,y-2,x1,y1);
    circles3(x-3,y-3,x1,y1);
    circles3(x-4,y-4,x1,y1);
    circles3(x-5,y-5,x1,y1);
    circles3(x-6,y-6,x1,y1);
    circles3(x-7,y-7,x1,y1);
    circles3(x-8,y-8,x1,y1);
    circles3(x-9,y-9,x1,y1);
    circles3(x-10,y-10,x1,y1);
    circles3(x-11,y-11,x1,y1);
    circles3(x-12,y-12,x1,y1);
    circles3(x-13,y-13,x1,y1);
    circles3(x-14,y-14,x1,y1);
    circles3(x-15,y-15,x1,y1);
    circles3(x-16,y-16,x1,y1);
    circles3(x-17,y-17,x1,y1);
    circles3(x-18,y-18,x1,y1);
    circles3(x-19,y-19,x1,y1);
    while(x<=y){
          if(d<0)
          d+=2*x+3;
          else{
          d+= 2*x -2*y +5;
          y--;}
          x++;
          //delay(100);
          circles3(x,y,x1,y1);
          circles3(x-1,y-1,x1,y1);
          circles3(x-2,y-2,x1,y1);
          circles3(x-3,y-3,x1,y1);
          circles3(x-4,y-4,x1,y1);
          circles3(x-5,y-5,x1,y1);
          circles3(x-6,y-6,x1,y1);
          circles3(x-7,y-7,x1,y1);
          circles3(x-8,y-8,x1,y1);
          circles3(x-9,y-9,x1,y1);
          circles3(x-10,y-10,x1,y1);
          circles3(x-11,y-11,x1,y1);
          circles3(x-12,y-12,x1,y1);
          circles3(x-13,y-13,x1,y1);
          circles3(x-14,y-14,x1,y1);
          circles3(x-15,y-15,x1,y1);
          circles3(x-16,y-16,x1,y1);
          circles3(x-17,y-17,x1,y1);
          circles3(x-18,y-18,x1,y1);
          circles3(x-19,y-19,x1,y1);
    }*/
}

void Makecircle2(int r,int x1=320,int y1=240)
{
    int x=0;
    int y= r;
    int d= 1-r;
    circles2(x,y,x1,y1);
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
        circles2(x,y,x1,y1);
    }
}
void draw_ellipse1(int x1,int y1,int x,int y)
{
    putpixel(x1+x,y1-y,WHITE);
    putpixel(x1-x,y1+y,WHITE);
    putpixel(x1+x,y1+y,WHITE);
    putpixel(x1-x,y1-y,WHITE);
}


drawellipse(int a=120,int b=80,int x1=320,int y1=240)
{

    // int gdriver = DETECT, gmode, errorcode;
    // initgraph(&gdriver, &gmode,"C:\\TURBOC3\\BGI");
    //int a=50,b=100;
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



//getch();
//closegraph();

}


int main()
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode,"C:\\TURBOC3\\BGI");

    while(1)
    {
        drawellipse(120,80);
        int a = 120,b = 80,a1=320,b1=240;

        //Part 1
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
            Makecircle(20,a1+(-x),b1+(-y));
            drawellipse(120,80);
            //delay(50);
            Makecircle2(20,a1+(-x),b1+(-y));

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
            Makecircle(20,a1+(-x),b1+(-y));
            drawellipse(120,80);
            //delay(50);
            Makecircle2(20,a1+(-x),b1+(-y));
        }

        //part 2
        x=a;
        y=0;
        d=a*a+(b*b)/4 -a*b*b;
        Makecircle(20,a1+(-x),b1+(y));
        drawellipse(120,80);
        //delay(50);
        Makecircle2(20,a1+(-x),b1+(y));
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
            Makecircle(20,a1+(-x),b1+(y));
            drawellipse(120,80);
            //delay(50);
            Makecircle2(20,a1+(-x),b1+(y));
        }
        d=b*b*(x+0.5)*(x+0.5)+a*a*(y-1)*(y-1)-a*a*b*b;
        //x=0,y=b;
        while(y>0)
        {
            if(d>0)
            {
                d+=a*a*(3-2*y);
            }
            else
            {
                d+=b*b*(2*x-2)+a*a*(3-2*y);
                x--;
            }
            y++;
            Makecircle(20,a1+(-x),b1+(y));
            drawellipse(120,80);
            //delay(50);
            Makecircle2(20,a1+(-x),b1+(y));
        }


        //part 3
        d=  b*b + a*a*(b-0.5)*(b-0.5) - a*a*b*b;
        x=0,y=b;
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
            Makecircle(20,a1+(x),b1+(y));
            drawellipse(120,80);
            //delay(50);
            Makecircle2(20,a1+(x),b1+(y));

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
            Makecircle(20,a1+(x),b1+(y));
            drawellipse(120,80);
            //delay(50);
            Makecircle2(20,a1+(x),b1+(y));
        }
        cleardevice();

    }
    getch();
    closegraph();
}


