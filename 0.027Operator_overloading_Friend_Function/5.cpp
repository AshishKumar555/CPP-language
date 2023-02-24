#include<iostream>
using namespace std;
class Number
{
  private:
  int x,y,z;
  public:
  void input()
  {
    cout<<"Enter the three numbers\n";
    cout<<"-----------------------------\n";
    cout<<"Enter the first number\n";
    cin>>x;
    cout<<"Enter the second number\n";
    cin>>y;
    cout<<"Enter the third number\n";
    cin>>z;
  }
  void Display()
  {
    cout<<"\nx="<<x<<" "<<"y="<<y<<" "<<"z="<<z<<"\n";
  }
  void operator-()
  {
    x=-x;
    y=-y;
    z=-z;
  }

};
int main()
{
     Number num;
    num.input();
    num.Display();
  //  num.operator-();
  -num;
  cout<<"\nThe Negated numbers are\n";
    num.Display();
    return 0;
}