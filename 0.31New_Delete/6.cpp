#include<iostream>
using namespace std;
class B;
class A
{
    private:
     int num1;
     public:
     A()
     {
       num1=10;
     }
     void ShowData()
     {
        cout<<"\nThe First value is   : "<<num1;
     }
     friend void swap(A *num1,B *num2);
};
class B
{private:
  int num2;
  public:
 
  B()
  {
    num2=20;
  }
   void showData()
  {
   cout<<"\nThe Second value : "<<num2;
  }
  friend void swap(A *num1,B*num2);
};
void swap(A *no1,B *no2)
{
    int no3;
    no3=no1->num1;
    no1->num1=no2->num2;
    no2->num2=no3;
}
int main()
{
    A a;
    B b;
   swap(&a,&b);
   a.ShowData();
   b.showData();
    return 0;
}
