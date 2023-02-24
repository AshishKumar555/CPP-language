#include<iostream>
using namespace std;
class Area
{
    private:
  int side;
  float r;
  float length,breath;
  public:
  void getside(int x)
  {
    side=x;
  }
  void getLengthBreath(int x,int y)
  {
   length=x;
   breath=y;
  }
  void getR(int p)
  {
    r=p;
  }
  float SquareArea()
  {
    return side*side;
  }
  int RectangleArea()
  {
    return length*breath;
  }
  float circleArea()
  {
    return 3.14*r*r;
  }
};
int main()
{
    Area n;
    n.getside(4);
    n.getLengthBreath(5,6);
    n.getR(7);
    cout<<"The area of square is==> "<<n.SquareArea()<<endl;
      cout<<"The area of rectangle is==> "<<n.RectangleArea()<<endl;
        cout<<"The area of circle is==> "<<n.circleArea()<<endl;
    return 0;
}