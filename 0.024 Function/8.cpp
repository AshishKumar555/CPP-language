#include<iostream>
using namespace std;
float area(int r)
{
 return 3.14*r*r;  
}
int area(int a,int b)
{
    return a*b;
}
float area(float base,float height)
{
    return 0.5*base*height;
}
int main()
{
    int a,d,c;
    float b,h;
    cout<<"Enter the radious"<<endl;
    cin>>a;
    cout<<"Area of circle==>"<<area(a)<<endl;
    cout<<"Enter length and breath"<<endl;
    cin>>d>>c;
    cout<<"Area of retangle ==> "<<area(d,c)<<endl;
    cout<<"Enter the base and height"<<endl;
    cin>>b>>h;
    cout<<"Area of triangle ==>"<<area(b,h)<<endl;
    return 0;
}
