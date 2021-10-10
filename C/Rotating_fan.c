#include <graphics.h>
#include <conio.h>
#include <dos.h>

void main()
{

int d,m;

int midx, midy;
int i;
d = DETECT;

initgraph(&d, &m, "C:\\Turboc3\\BGI");

midx = 320;
midy = 240;
i=0;
while(!kbhit())
{

setfillstyle(SOLID_FILL,15);
circle(midx,midy,10);
floodfill(320,240,15);


pieslice(midx,midy, 0+i,50+i,100);
pieslice(midx,midy, 120+i,170+i,100);
pieslice(midx,midy, 240+i, 290+i,100);


delay(30);
cleardevice();
i=i+1;
}

getch();
}
