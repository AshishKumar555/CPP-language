#include<iostream>
using namespace std;
class Complex
{
  private:
  int real,img;
  public:
  Complex()
  {
   
  }
  Complex(int x,int y)
  {
   real=x;
   img=y;
  }
  Complex & operator=(Complex &t)
              //Complex c1=c2 to Copy constructor call hoga :
  {    //bad me c1=c2 hoga to Assignment operator call hoga :
        //1.> if(c1==c2) return 0; 
    //2.>free(c1) ho sakta h pahale c1 me Dynamically memory allocate kiya ho ;
    //3.>return obj. so that c1=c2=c3:
    cout<<"Assignment is called\n";
    this->real=t.real;
    this->img=t.img;
    return *this;//t
  }
  void Display()
  {
    cout<<"real =" <<real<<"  img = "<<img<<endl;
  }
 
};
int main()
{
    Complex c1(5,10),c2(1,2),c3;
    c3=c1=(c2);
   // c3=c1.operator=(c2);
    c3.Display();
    c1.Display();
    return 0;
}