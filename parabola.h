void drawParabolaR(int x,int y,int x1,int y1)
{
    putpixel((-x)+x1,y+y1,WHITE);
    putpixel((-x)+x1,(-y)+y1,WHITE);
}

void parabolaR(int p,int x1 =320,int y1 =240)
{

    int x=0,y=0,d=2*(p-1);
    drawParabolaR(x,y,x1,y1);
    while(y<=p)
    {
        if(d>=0)
        {
            d+=-4*y-6;
        }
        else
        {
            d+=4*p-4*y-6;
            x++;
        }
        y++;
        drawParabolaR(x,y,x1,y1);
    }
    d+=6*p+2;
    while(x<20)
    {
        if(d>=0)
        {
            d+=-4*p;
        }
        else
        {
            d+=4+4*y-4*p;
            y++;
        }
        x++;
        drawParabolaR(x,y,x1,y1);
    }
}

void drawParabolaL(int x,int y,int x1,int y1)
{
    putpixel((x)+x1,y+y1,WHITE);
    putpixel((x)+x1,(-y)+y1,WHITE);
}

void parabolaL(int p,int x1 =320,int y1 =240)
{

    int x=0,y=0,d=2*(p-1);
    drawParabolaL(x,y,x1,y1);
    while(y<=p)
    {
        if(d>=0)
        {
            d+=-4*y-6;
        }
        else
        {
            d+=4*p-4*y-6;
            x++;
        }
        y++;
        drawParabolaL(x,y,x1,y1);
    }
    d+=6*p+2;
    while(x<20)
    {
        if(d>=0)
        {
            d+=-4*p;
        }
        else
        {
            d+=4+4*y-4*p;
            y++;
        }
        x++;
        drawParabolaL(x,y,x1,y1);
    }
}

