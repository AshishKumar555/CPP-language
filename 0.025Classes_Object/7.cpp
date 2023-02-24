#include<iostream>
using namespace std;
class greatest
{
  private:
  int a,b,c;
  public:
  int set(int x,int y,int z)
  {
    a=x;
    b=y;
    c=z;
  }
  
  
  void calculatelargest()
  {
    
    if(a>b)
    {
     
      if(a>c)
      {
        cout<<"The greatest no is ==> "<<a;
      }
    }    
        else
    if(b>c)
    {
      cout<<"The greatest no is ==> "<<b;
    }
    else
    cout<<"The greatest no is ==> "<<c;
    
  }
};
int main()
{
    greatest n;
    n.set(15,26,10);
    n.calculatelargest();
    
    return 0;
}