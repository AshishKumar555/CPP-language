#include<iostream>
using namespace std;
class Complex
{
  private:
  int a,b;
   friend Complex operator+(Complex m,Complex c);
  public:

  void set(int x,int y)
  {
    a=x;
    b=y;
  }
   
  void showData()
  {
    cout<<"\n"<<a<<"+"<<b<<"i";
  }
};
  Complex operator+(Complex m,Complex c)
  {
    Complex temp;
    temp.a=m.a+c.a;
    temp.b=m.b+c.b;
    return temp;
  }
int main()
{
    Complex c1,c2,c3;
    c1.set(5,7);
    c2.set(2,3);
    //c3=c1+c2;
    c3=operator+(c1,c2);
    c3.showData();
    return 0;
}