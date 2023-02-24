#include<iostream>
using namespace std;
class StaticCount
{
  private:
  static int k;
  public:
   void inc_static()
   {
    k++;
   }
   void showStatic()
   {
    cout<<"The static is : "<<k;
   }
};
int StaticCount ::k;
int main()
{
    StaticCount a1;//with one object we can call function many times ::
    a1.inc_static();
    a1.inc_static();
    a1.inc_static();
    a1.showStatic();
    return 0;
}

