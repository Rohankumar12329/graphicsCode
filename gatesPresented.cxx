#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include"LogicGates.h"
using namespace std;

int main()
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode,"C:\\TURBOC3\\BGI");

    not_gate(420,100);
    or_gate(140,100);
    nor_gate(280,100);
    and_gate(170,200);
    nand_gate(310,200);
    And_gate(470,200);
    xor_gate(140,300);
    xnor_gate(280,300);

    getch();
    closegraph();
}
