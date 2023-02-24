#include<iostream>
using namespace std;

class Item
{
  int i;
  public:
   Item(){}
   Item(int x)
   {
    i=x;
   }
   
   void display()
   {
    cout<<"Item i = "<<i<<endl;
   }
};
class Product
{
 int p,q;
 public:
 Product(){}
  void Set_Data(int x,int y)
  {
   p=x;
   q=y;
  }
  void display()
  {
    cout<<"P = "<<p<<" Q = "<<q<<endl;
  }
 
  operator Item()//operator typecasting me kuchh nahi pass hoga
  {  //
    Item i(p+q);
    return i;
  }
};

int main()
{
    Item i1;
    Product p1;
    p1.Set_Data(3,4);
    p1.display();
    i1=(Item)p1;
    i1.display();
    return 0;
}