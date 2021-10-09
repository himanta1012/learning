#include <iostream>
using namespace std;
class complex
{
    int x,y;
    public:
    complex(){}
    complex(int a,int b)
    {
        x=a;
        y=b;
    }
  complex operator+(complex &c)
  {
      complex v;
      v.x=x+c.x;
      v.y=y+c.y;
      return v;
  }
   complex  operator-(complex &c)
  {
      complex v;
      v.x=x-c.x;
      v.y=y-c.y;
      return v;
  }
  void display()
  {
      cout<<x<<" "<<y<<"\n";
  }
};
int main() {
	// your code goes here
complex c1;
complex c2(8,4);
complex c3(7,2);
complex c ;
c1= c2 + c3;
c1.display();
c= c2 - c3;
c.display();
	return 0;
}
