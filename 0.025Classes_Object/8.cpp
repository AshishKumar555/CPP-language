#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int a;
    int b,Area;
    public:
    void setN(int x,int y)
    {
        a=x;
        b=y;
    }
    void getN()
    {
     cout<<"length and breath are  "<<a<< ", "<<b;
    }
    void getArea()
    {
         cout<<" area is ==> "<<Area;
    }
    void calculateRectangle()
    {
        Area=a*b;
    }
};
int main()
{
   Rectangle n;
   n.setN(6,5);
   n.calculateRectangle();
   n.getN();
   n.getArea();
   
    return 0;
}