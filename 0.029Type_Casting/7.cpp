#include<iostream>
using namespace std;

class Minute
{
    int sec;
    public:
      void display()
      {
        cout<<" Sec = "<<sec<<endl;
      }
      Minute()
      {
        sec=0;
      }
      Minute( int y)
      {
       sec=y;
      }
 
};
class Time
{
  int hour,min;
  public:
   Time( int x,int y)
   {
    hour=x;
    min=y;
   }
   Time(){}
   void display()
   {
    cout<<"Hour = "<<hour<<" Minutes = "<<min<<endl;
   }
   operator Minute()
   {
    return hour+min;
   }
};
int main()
{
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.display();
    m1=t1;
    m1.display();
    t1.display();
    return 0;
}