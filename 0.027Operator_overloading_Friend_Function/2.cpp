#include<iostream>
using namespace std;
class unary
{
    private:
    int a,b;
    public:

    void set(int x)
    {
      a=x;
    }
  
    void operator++()
    {
     a++;
    }
    void operator--()
    {
      a--;
    }
    
    void showf1()
    {
     cout<<"\nThe 'a' is ==>"<<a;
    }
  
};
int main()
{
    unary c1,c2;
    c1.set(10);
    c1.operator++();
    c1.showf1();
    c1.operator--();
    c1.showf1();
    return 0;
}