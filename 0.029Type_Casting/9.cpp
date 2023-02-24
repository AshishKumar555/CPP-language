#include<iostream>
using namespace std;
class Dollar
{
  private:
   int x;
   public:
   Dollar(){}
   Dollar(int y)
   {
     x=y;
   }
   void display()
   {
    cout<<x<<endl;
   }
};
int main()
{
    Dollar d;
    int x=50;
    d=x;
    d.display();
    return 0;
}