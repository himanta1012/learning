#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{

int gd,gm;
int i=1,x=5,y=1;
int a;
int x1=10,x2=100,x3=20,x4=80,x5=0;

int s1=-10,s2=-5,s3=-15,s4=-20;
gd=DETECT;
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
for(a=1;a<90;a++)
{
setcolor(15);
line(0,420,640,420);
setcolor(9);
rectangle(x1,380,x2,400);
rectangle(x3,360,x4,380);
rectangle(x5,395,x1,400);
setcolor(11);
circle(x3,410,10);
circle(x4,410,10);

settextstyle(1,HORIZ_DIR,1);
setcolor(1);
outtextxy(x3,380,"TESLA");

setcolor(8);
if(a%5==0)
{
rectangle(s1,395,s2,400);
rectangle(s3,405,s1,410);
}
else
{
rectangle(s4,395,s3,400);
rectangle(s3,385,s1,390);
}
s1+=5;
s2+=5;
s3+=5;
s4+=5;

delay(40);
x1+=5;
x2+=5;
x3+=5;
x4+=5;
x5+=5;
cleardevice();
}

getch();
}
