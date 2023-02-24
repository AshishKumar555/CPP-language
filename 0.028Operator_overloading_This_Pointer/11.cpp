#include<iostream>
using namespace std;
class Marks
{
  private:
  int marks;
  public:
  void setf1(int x)
  {
   marks=x;
  }
  void Display()
  {
    cout<<"marks = "<<marks;
  }
  Marks *operator->()//Arrow ki madad se print karne ke liye hame
  {                 //pointer return karna padega :
   return this;
  }
};
int main()
{
    Marks m1,m2;
   m1.setf1(100);
   m1->Display();
    return 0;
}