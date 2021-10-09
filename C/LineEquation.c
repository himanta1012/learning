#include<stdio.h>
  #include<conio.h>
  #include<math.h>
  #include<graphics.h>
  void main()
  { 
int gd=DETECT,gm;
    	float y,x,c,a,b,dy,dx,i,j,m;
    	initgraph(&gd,&gm,"C://TURBOC3//BGI");
    	printf("ENTER STARTING X CO-ORDINATE:");    	scanf("%f",&x);
    	printf("ENTER STARTING Y CO-ORDINATE:");    	scanf("%f",&y);
    	printf("ENTER ENDING X CO-ORDINATE:");    	scanf("%f",&a);
    	printf("ENTER ENDING Y CO-ORDINATE:");      	scanf("%f",&b);
    	dy=b-y;	dx=a-x;   m=dy/dx;
    	putpixel(x,y,7);
   	 c=y-m*x;
    	for(i=x;i<a;i++)
    	{
       		j=m*i+c;  		j=floor(j);       		putpixel(i,j,7);
    	}    	getch();		}

