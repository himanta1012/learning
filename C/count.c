#include<stdio.h>
#include<conio.h>

void main()
{
FILE *fi;
char ch;
int noc=0,nob=0,not=0,nol=0;
fi=fopen("Q10.C","r");

clrscr();

while(1)
{
ch=fgetc(fi);
if(ch==EOF)
break;

noc++;
if(ch==' ')
nob++;
if(ch=='\t')
not++;
if(ch=='\n')
nol++;
}

printf("\nNumber of characters::%d",noc);
printf("\nNumber of blanks::%d",nob);
printf("\nNumber of tabs::%d",not);
printf("\nNumber of lines::%d",nol);

fclose(fi);
getch();
}
