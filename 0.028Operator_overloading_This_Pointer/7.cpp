#include<iostream>
using namespace std;
class integer
{
  int num;
  public:
   void  setf1(int num)
   {
    this->num=num;
   }
   int operator!()// !5==0 : !0==1 :::::
   {
     return -num;
   }
   void Display()
   {
    cout<<num;
   }
};
int main()
{
    integer A1,A2;
    int A3=0;
    A1.setf1(10);
   // A1.operator!();
    cout<<!A1<<endl;
   cout<<!A3<<endl;
    A1.Display();
    return 0;
}