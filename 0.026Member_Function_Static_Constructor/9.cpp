#include<iostream>
using namespace std;
class Bill
{
    private:
    int houseNo;
    int units;
    public:

    
  void get(int x,int y)
  {
    houseNo=x;
    units=y;
  }
  void CalculateBill()
  {
    if(units<=100)
    {
        cout<<"The Bill in Rupees : "<<(units*1.20);
    }
    if(units>100 && units<=200)
    {
      cout<<"The Bill in Rupees : "<<((units-100)*2+120);
    }
    if(units>200)
    {
        cout<<"The Bill in Rupees : "<<((units-200)*3+320);
    }
  }
};
int main()
{
    Bill a1,a2;
    int c;
    cout<<"Enter the units";
    cin>>c;
    a1.get(10,c);//Here you can set units :........!
    a1.CalculateBill();
    return 0;
}