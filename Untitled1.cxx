#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include "parabola.h"

int main()
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode,"C:\\TURBOC3\\BGI");

    parabolaR(100,310,300);
    parabolaL(100,330,300);

    getch();
   closegraph();
}
