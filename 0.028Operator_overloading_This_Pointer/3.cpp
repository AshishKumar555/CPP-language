#include<iostream>
using namespace std;
class Subscript
{
  int a[100],size=100;
  public:
  void Setf1(int index,int value)
  {
    a[index]=value;
  }
  void Display(int index)
  {
    cout<<a[index];
  }
  void operator[]( int index )
  {
   if(index>size)
   {
    cout<<"Array index out of Bound\n";
    exit(0);
   }
  }
};
int main()
{
    Subscript s1,s2;
    s1.Setf1(5,20);
    s1.operator[](120);
    s1.Display(5);
    return 0;
}