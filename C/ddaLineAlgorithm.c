#include<stdio.h>        #include<conio.h>
#include<graphics.h>  #include<math.h>
void main()
{ 
int gd=DETECT,gm;
   	int x,y,a,b,i,j,dy,dx;   float m;
  	initgraph(&gd,&gm,"C://TURBOC3//BGI");
printf("ENTER STARTING X CO-ORDINATE:");    scanf("%d",&x);
  printf("ENTER STARTING Y CO-ORDINATE:");  scanf("%d",&y);
  printf("ENTER ENDING X CO-ORDINATE:");      scanf("%d",&a);
  printf("ENTER ENDING Y CO-ORDINATE:");      scanf("%d",&b);
  	dy=b-y;    dx=a-x;
  	putpixel(x,y,7);    putpixel(a,b,7);
  	m=dy/dx;
  	if(m>1)
  	{	for(i=0;i<dy;y++)
     		}               y=y+1;       			x=x+1/m;
       			x=floor(x);      			y=floor(y);
       			putpixel(x,y,7);}}
   	else if(m<=1)
   	{  for(i=0;i<dx;i++)
      		{	x=x+1;	y=y+m;	x=floor(x);	y=floor(y);	putpixel(x,y,7);  }
   	}   getch();}
