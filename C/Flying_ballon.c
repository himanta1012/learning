#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{

int gd,gm;
int i;
int r;
int y=0;
gd=DETECT;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");

while(!kbhit())
{
for(i=1;i<=50;i++)
{
ellipse(100,300-y,0,360,20,40);
line(100,340-y,110,360-y);
line(100,340-y,90,360-y);
line(90,360-y,110,360-y);
arc(100,370-y,90,270,10);
arc(100,390-y,270,90,10);
setfillstyle(HATCH_FILL,3);
floodfill(100,300-y,WHITE);
floodfill(100,350-y,WHITE);

ellipse(200,400-y,0,360,20,40);
line(200,440-y,210,460-y);
line(200,440-y,190,460-y);
line(190,460-y,210,460-y);
arc(200,470-y,90,270,10);
arc(200,490-y,270,90,10);
setfillstyle(LTSLASH_FILL,5);
floodfill(200,400-y,WHITE);
floodfill(200,450-y,WHITE);

ellipse(300,440-y,0,360,30,40);
line(300,480-y,310,500-y);
line(300,480-y,290,500-y);
line(290,500-y,310,500-y);
arc(300,510-y,90,270,10);
arc(300,530-y,270,90,10);
setfillstyle(WIDE_DOT_FILL,14);
floodfill(300,440-y,WHITE);
floodfill(300,490-y,WHITE);

ellipse(400,400-y,0,360,25,40);
line(400,440-y,410,460-y);
line(400,440-y,390,460-y);
line(390,460-y,410,460-y);
arc(400,470-y,90,270,10);
arc(400,490-y,270,90,10);
setfillstyle(CLOSE_DOT_FILL,10);
floodfill(400,400-y,WHITE);
floodfill(400,450-y,WHITE);


ellipse(500,400-y,0,360,20,40);
line(500,440-y,510,460-y);
line(500,440-y,490,460-y);
line(490,460-y,510,460-y);
arc(500,470-y,90,270,10);
arc(500,490-y,270,90,10);
setfillstyle(LINE_FILL,7);
floodfill(500,400-y,WHITE);
floodfill(500,450-y,WHITE);

delay(30);
cleardevice();
y=y+4;
}
y=0;
}

getch();
}
