#include<stdio.h>
#include<conio.h>

void rev(char [20]);

void main()
{
char str[20];
clrscr();
printf("Enter the string::");
scanf("%s",&str);

rev(str);

printf("\nReverse of string is::%s",str);

getch();
}

void rev(char ch[20])
{
int i,j,n;
char c;

n=strlen(ch);

for(i=0,j=n-1;i<n/2;i++,j--)
{
	c=ch[i];
	ch[i]=ch[j];
	ch[j]=c;
}
}
