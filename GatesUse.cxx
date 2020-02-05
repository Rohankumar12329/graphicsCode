#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include"parabola.h"
#include"line.h"
#include"circ.h"
#include"LogicGates.h"
using namespace std;

int main()
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode,"C:\\TURBOC3\\BGI");

    //all gates
    {
        and_gate(200,100);
        and_gate(200,300);
        not_gate(125,115);
        not_gate(125,285);
        or_gate(280,205);
    }
    //direct lines from A and B
    {
        lineex(60,153,85,85);
        lineex(60,153,315,315);
    }
    //connections to NOT gate
    {
        lineex(70,100,115,115);
        lineey(70,70,115,313);
        lineey(100,100,125,283);
        lineey(100,100,85,105);
        //separation of wire in connecting to not
        {
            drawCircle(9,100,115,5);
            drawCircle(9,100,115,6);
            drawCircle(9,100,115,7);
            drawCircle(9,100,115,8);
        }
    }
    //connections of AND gates to OR gate
    {
        lineey(257,257,100,193);
        lineey(257,257,216,299);
    }

    getch();
    closegraph();
}
