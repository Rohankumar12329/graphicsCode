void or_gate(int x,int y)
{
    drawCircle(60,x,y+42,1);
    drawCircle(60,x,y-42,4);
    drawCircle(25,x-18,y,2);
    drawCircle(25,x-18,y,3);
    lineex(x+42,x+70,y,y);
    lineex(x-23,x+3,y-10,y-10);
    lineex(x-23,x+3,y+10,y+10);
}

void and_gate(int x,int y)
{
    drawCircle(25,x,y,1);
    drawCircle(25,x,y,4);
    drawCircle(25,x,y,2);
    drawCircle(25,x,y,3);
    lineex(x+25,x+55,y,y);
    lineex(x-10,x,y-25,y-25);
    lineex(x-10,x,y+25,y+25);
    lineey(x-10,x-10,y-25,y+23);
    lineex(x-45,x-12,y-15,y-15);
    lineex(x-45,x-12,y+15,y+15);
}

void And_gate(int x,int y)
{
    parabola(20,x,y);
    lineex(x,x+30,y,y);
    lineey(x-20,x-20,y-27,y+27);
    lineex(x-52,x-22,y-15,y-15);
    lineex(x-52,x-22,y+15,y+15);
}

void not_gate(int x,int y)
{
    lineey(x-10,x-10,y-10,y+9);
    lineex(x-10,x+7,y-10,y-1);
    lineeup(x-10,x+7,y+10,y+1);
    drawCircle(3,x+11,y);
    lineex(x+15,x+28,y,y);
    lineex(x-25,x-12,y,y);
}

void xor_gate(int x,int y)
{
    drawCircle(60,x,y+42,1);
    drawCircle(60,x,y-42,4);
    drawCircle(25,x-18,y,2);
    drawCircle(25,x-18,y,3);
    drawCircle(25,x-24,y,2);
    drawCircle(25,x-24,y,3);
    lineex(x+45,x+75,y,y);
    lineex(x-23,x-3,y-10,y-10);
    lineex(x-23,x-3,y+10,y+10);
}
