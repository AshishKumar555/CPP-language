#include<iostream>
using namespace std;
class Complex
{
     private:
  int real,img;
  public:
  void displayComplex(Complex c)
  {
     cout<<real<<"+"<<img<<"i"<<endl;
     cout<<c.real<<"+"<<c.img<<"i"<<endl;
  }
  void setComplex(int x,int y)
  {
    real=x;
    img=y;
  }
  void add(Complex c)
  {
  cout<<real+c.real<<"+"<<img+c.img<<"i";
  }

};
int main()
   {
      Complex c1,c2;
      c1.setComplex(2,7);//you can set:
      c2.setComplex(5,8);//you can set:
      c1.displayComplex(c2);
      c1.add(c2);

      
      return 0;

   }