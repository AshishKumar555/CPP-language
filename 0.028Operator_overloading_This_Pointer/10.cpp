#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    int inches;
    public:
     Distance()
     {

     }  
     Distance(int feet,int inches)
     {
      this->feet=feet;
      this->inches=inches;
     } 
     Distance operator()(int a,int b,int c)
     {
        Distance d;
        d.feet=a+c+5;
        d.inches=a+b+15;
        return d;
     }
     void Display()
     {
        cout<<"feet = "<<feet<<" Inches = "<<inches<<endl;
     }
};
int main()
{
    Distance a1,a2(10,300);
    //a1=a2.operator()(1,2,3);
     a1=a2(1,2,3);
    a1.Display();
    return 0;
}