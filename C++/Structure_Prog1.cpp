#include<iostream.h>
#include<conio.h>

struct student
  {
     int roll,age;
     char name[20],course[10];
  }s;
void getdata();
void showdata();
void main()
  {
    clrscr();
    getdata();
    showdata();
    getch();
  }
void getdata()
{ 
   cout<<"\nEnter Roll no. ";
   cin>>s.roll;
   cout<<"\nEnter Age      ";
   cin>>s.age;
   cout<<"\nEnter Name     ";
   cin>>s.name;
   cout<<"\nEnter Course   ";
   cin>>s.course;
}
void showdata()
{
  cout<<"\nRoll No. => "<<s.roll;
  cout<<"\nName     => "<<s.name;
  cout<<"\nAge      => "<<s.age;
  cout<<"\nCourse   => "<<s.course;
}
