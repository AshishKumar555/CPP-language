#include<iostream>
using namespace std;
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
  int get(){return p;}
  int gety(){return q;}
};
class Item
{
  int i;
  public:
   Item(){}
   Item(Product s)
   {
    i=s.get()+s.gety();
   }
   
   void display()
   {
    cout<<"Item i = "<<i<<endl;
   }
};
int main()
{
    Item i1;
    Product p1;
    p1.Set_Data(20,40);
    p1.display();
    i1=(Item)p1;
    i1.display();
    return 0;
}