#include<iostream>
using namespace std;
class Rupee
{
  private:
  int x;
  public:
    Rupee(){}
    Rupee(int v)
    {
     x=v;
    }
    operator int()
    {
        return x;
    }
   
};
int main()
{
    Rupee r(10);
   
    int x=r;
    cout<<x<<endl;
    return 0;
}