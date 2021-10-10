//Rotation

#include<stdio.h>
#include<graphics.h>
#include<math.h>

int graDriver=DETECT,graMode;
int n,xs[100],ys[100],i,xp,yp,degree;
float radian;

void rotation();
void DrawFn();

void degToRad()
{radian=(float)degree*3.14f/180;}

void main()
{printf("Enter number of sides: ");
scanf("%d",&n);
printf("Enter co-rdinates: x,y for each point ");
for(i=0;i<n;i++)
 scanf("%d%d",&xs[i],&ys[i]);
printf("\nenter pivot point co-ordinate");
scanf("%d%d",&xp,&yp);
printf("\nenter rotation angle");
scanf("%d",&degree);
degToRad();
initgraph(&graDriver,&graMode,"C:\\TURBOC3\\BGI\\");
cleardevice();
//Drawing original in RED color
setcolor(RED);
DrawFn();
//Doing rotation
rotation();
//Drawing rotated polygon in BLUE color
setcolor(BLUE);
DrawFn();
getch();
}

void DrawFn()
{for(i=0;i<n;i++)
 line(xs[i],ys[i],xs[(i+1)%n],ys[(i+1)%n]);
}
void rotation()
{float t,v;
for(i=0;i<n;i++)
 { t=xs[i]-xp;
 v=ys[i]-yp;
 xs[i]=xp+floor(t*cos(radian)-v*sin(radian));
 ys[i]=yp+floor(v*cos(radian)+t*sin(radian));
 }
}
