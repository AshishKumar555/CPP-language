#include<iostream>
using namespace std;
class Complex
{
  private:
  int a;int b;
  public:
  void setData(int x,int y)
  {
    a=x;
    b=y;
  }
  void showData()
  {
    cout<<a<<" + "<<b<<" i"<<endl;
  }
  Complex add(Complex c)
  {
    
    cout<<a+c.a<<" + "<<b+c.b<<" i";
  }
};
int main()
{
  Complex a1,a2;
  a1.setData(5,10);
  a2.setData(10,20);
  a1.showData();
  a2.showData();
  a1.add(a2);
  return 0;
}