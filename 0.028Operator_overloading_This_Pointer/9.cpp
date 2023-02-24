#include<iostream>
using namespace std;
class Integer
{
 int num;
 public:
  operator int()
  {
    return num;
  } 
  Integer(){}
  Integer(int x)
  {
    num=x;
  }
  void Display()
  {
    cout<<num<<endl;
  }
};
int main()
{
    Integer a1(10),a2;
    int x=0;
    x=a1;
    cout<<x;
    return 0;
}