#include<iostream>
using namespace std;
class ReverseNumber
{
  private:
  int ActualNum;
  int ReverseNum;
  public:
  void setActual(int x)
  {
    ActualNum=x;
  }
  int getActual()
  {
    return ActualNum;
  }
  int getRev()
  {
    return ReverseNum;
  }
  void calculateReverse()
  {
   int r,sum=0;
   while(ActualNum>0)
   {
    r=ActualNum%10;
   sum=sum*10+r;
   ActualNum=ActualNum/10;
   }
   ReverseNum=sum;
  }
  
};
int main()
{
    ReverseNumber n;
    n.setActual(1234);
    n.calculateReverse();
    cout<<"The reverse of no."<<n.getActual()<<" is "<<n.getRev();
    return 0;
}