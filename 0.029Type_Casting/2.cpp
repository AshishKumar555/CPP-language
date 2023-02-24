#include<iostream>
using namespace std;
class Complex
{
 int real,img;
 public:
   operator int()
   {
    return real+img;//real+img :
   }
  explicit operator long()//Jab do type converson ho rahe ho 
   {//to ek explicit karenge so that compiler work properly ;
    return real*img;
   }
   Complex(int x,int y)
   {
    real=x;
    img=y;
   }
   
} ;
int main()
{
    Complex c1(30,40);
   // c1.setData(3,4);
    int x,y;
    x=c1;
    cout<<(long)c1;
   
    return 0;
}
