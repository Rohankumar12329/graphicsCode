
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

void drawCircle(int r,int x1=320,int y1=240,int i = 9)
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
        switch(i)
        {
        case 1 :
            putpixel(x1+x,y1+(-y),WHITE);
            break;
        case 2 :
            putpixel(x1+y,y1+(-x),WHITE);
            break;
        case 3 :
            putpixel(x1+y,y1+x,WHITE);
            break;
        case 4 :
            putpixel(x1+x,y1+y,WHITE);
            break;
        case 5 :
            putpixel(x1+(-x),y1+y,WHITE);
            break;
        case 6 :
            putpixel(x1+(-y),y1+x,WHITE);
            break;
        case 7 :
            putpixel(x1+(-y),y1+(-x),WHITE);
            break;
        case 8 :
            putpixel(x1+(-x),y1+(-y),WHITE);
            break;
        default :
            circles(x,y,x1,y1);
        }
    }
}
