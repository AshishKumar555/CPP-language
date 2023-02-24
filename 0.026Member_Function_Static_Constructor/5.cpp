#include<iostream>
using namespace std;
class Date
{
  public:
    int dd;
    int mm;
    int yy;
    /*Date()
    {
     dd=20;    //........Default constructor:::
     mm=10;
     yy=2022; 
    }
    */
   Date(int x,int y,int z)
   {
     dd=x;mm=y;yy=z;//.......Parameterised constructor::
   }
    void showdate()
    {
       cout<<dd <<"/"<< mm<<"/"<< yy;
    }
};
int main()
{
     Date d1(20,10,2022);
     d1.showdate();
    return 0;
}