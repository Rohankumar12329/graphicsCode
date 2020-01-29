drawParabola(int x,int y)
{
    putpixel(x+320,y+240,WHITE);
    putpixel(x+320,(-y)+240,WHITE);
}

void parabola(int p)
{
    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode,"C:\\TURBOC3\\BGI");

    int x=0,y=0,d=2*(p-1);
    drawParabola(x,y);
    while(y<=p)
    {
        if(d>=0)
        {
            d+=-4*y-6;
        }else
        {
            d+=4*p-4*y-6;
            x++;
        }
        y++;
        drawParabola(x,y);
    }
    d+=6*p+2;
    while(x<20)
    {
        if(d>=0)
        {
            d+=-4*p;
        }else
        {
           d+=4+4*y-4*p;
           y++;
        }
        x++;
        drawParabola(x,y);
    }
}