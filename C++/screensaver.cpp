#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{

int gd,gm;
int i=1;
int r=100;
gd=DETECT;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
while(!kbhit())
{
r=100;
for(i=1;i<20;i++)
{
setcolor(rand(4));
circle(300,225,r);
r=r+10;
delay(20);
}
cleardevice();
r=100;
for(i=1;i<20;i++)
{
setcolor(rand(4));
circle(0,240,r);
setcolor(rand(4));
circle(640,240,r);
r=r+10;
delay(20);
}
cleardevice();
r=100;
for(i=1;i<30;i++)
{
setcolor(rand(4));
circle(0,0,r);
setcolor(rand(4));
circle(640,0,r);
setcolor(rand(4));
circle(0,480,r);
setcolor(rand(4));
circle(640,480,r);

r=r+10;
delay(20);
}
cleardevice();

}
getch();
}
