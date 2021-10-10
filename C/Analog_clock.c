#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

void main()
{

int gd,gm;
int x,y,a;

gd=DETECT;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
while(!kbhit())
{

circle(320,240,10);
circle(320,240,90);
circle(320,240,110);


setfillstyle(SOLID_FILL,3);
floodfill(320,240,WHITE);

setfillstyle(SOLID_FILL,7);
floodfill(320,300,WHITE);

setfillstyle(SOLID_FILL,1);
floodfill(320,340,WHITE);

outtextxy(310,140,"12");
outtextxy(255,155,"11");
outtextxy(225,190,"10");
outtextxy(215,240,"9");
outtextxy(225,280,"8");
outtextxy(255,315,"7");
outtextxy(315,340,"6");
outtextxy(380,315,"5");
outtextxy(410,280,"4");
outtextxy(415,240,"3");
outtextxy(410,190,"2");
outtextxy(380,155,"1");

x=320+90*cos((3.14*a)/180);
y=240+90*sin((3.14*a)/180);

line(320,240,x,y);
a=a+1;

delay(100);
cleardevice();
}
getch();
}
