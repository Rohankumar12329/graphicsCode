
void lineex(int x1,int x2,int y1,int y2)
{
    int dx,dy,d,x,y;
    dx=x2-x1;
    dy=y2-y1;
    if(abs(dy)<abs(dx))
    {
        d=2*dy-dx;
        x=x1;
        y=y1;
        putpixel(x,y,WHITE);
        while(x<=x2)
        {

            if(d < 0)
            {
                d+= 2*dy;
            }
            else
            {
                d += 2*(dy-dx);
                y++;
            }
            x++;
            putpixel(x,y,WHITE);
        }
    }
}

void lineey(int x1,int x2,int y1,int y2)
{

    int dx,dy,d,x,y;
    dx=x2-x1;
    dy=y2-y1;
    if(abs(dy)>abs(dx))
    {
        d=2*dx-dy;
        x=x1;
        y=y1;
        putpixel(x,y,WHITE);
        while(y<=y2)
        {

            if(d < 0)
            {
                d+= 2*dx;
            }
            else
            {
                d += 2*(dx-dy);
                x++;
            }
            y++;
            putpixel(x,y,WHITE);
        }
    }
}

void lineeup(int x1,int x2,int y1,int y2)
{
    int dx,dy,d,x,y;
    dx=x2-x1;
    dy=y1-y2;
    if((dy)<(dx))
    {
        d=2*dy-dx;
        x=x1;
        y=y1;
        putpixel(x,y,WHITE);
        while(x<=x2)
        {

            if(d < 0)
            {
                d+= 2*dy;
            }
            else
            {
                d += 2*(dy-dx);
                y--;
            }
            x++;
            putpixel(x,y,WHITE);
        }
    }
}
