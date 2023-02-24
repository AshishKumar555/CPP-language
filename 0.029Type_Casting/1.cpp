#include<iostream>
using namespace std;
class Complex
{
  int real,img;
  public:
   Complex(){}
   Complex(int x)
   {
      real=x;
      img=x;
   }
   void Display()
   {
    cout<<"Real = "<<real<<"  Img = "<<img<<endl;
   }
};
int main()
{
Complex c1;
int x=5;
  c1=x;
  c1.Display();
  return 0;
}