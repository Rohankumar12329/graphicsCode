#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>
#include "CircleHeader.h"
using namespace std;

int main()
{
    printf("y");
    int gdriver = DETECT, gmode, errorcode, i, j;
   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

    Animation();
     getch();
   closegraph();
   return 0;
}
