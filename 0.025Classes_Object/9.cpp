#include<iostream>
using namespace std;
class circle
{
  private:
  int r,Area;
  public:
  void setN(int x)
  {
   r=x;
  }
  int getN()
  {
    return r;
  }
  void getArea()
  {
    cout<<"the area is ==> "<<Area<<"m^2";
  }
  void calculatearea()
  {
     Area=3.14*r*r;
  }
};
int main()
{
    circle n;
    n.setN(7);
    n.calculatearea();
    cout<<"The radius is "<<n.getN()<<" and ";
    n.getArea();
    return 0;
}