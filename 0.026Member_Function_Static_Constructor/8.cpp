#include<iostream>
using namespace std;
class Bank
{
    private:
     int principal;
     int rot;
     int year; 
     public:
     Bank(int x,int y,int z)
     {
      principal=x;
      rot=y;
      year=z;
     }
     /* void principal()
      {
        cout<<"Enter the principle"<<endl;
        cin>>principal;
      }
      */
      void Calculate()
      {
        cout<<"The simple interest  is ........."<<endl;
         cout<<(principal*rot*year)/100;
      }
};
int main()
{
    Bank c1(2000,2,1);
    c1.Calculate();
    return 0;
}//Read and constructor has doubt