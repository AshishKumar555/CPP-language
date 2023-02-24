#include<iostream>
using namespace std;
class Coordinate
{
  int x,y,z;
  public:
    Coordinate(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    Coordinate()
    {

    }
    void Display()
    {
        cout<<"x ="<<x<<" y ="<<y<<" z ="<<z<<endl;
    }
    Coordinate operator,(Coordinate t)
    {
        Coordinate s;
        s.x=t.z;
        s.y=t.y;
        s.z=t.x;
        return s;
    }

};
int main()
{
   Coordinate c1(1,2,3),c2(4,5,6),c3(33,34,35),c4(10,11,12);
   c1=(c2,c3);//c3=c2.operator,(c1);
   c1.Display();//, operator call ho raha h isliye value reverse order me hai :
   c2=(c3,c2,c4);
   c2.Display();
    return 0;
}