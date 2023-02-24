#include<iostream>
using namespace std;
class factorial
{
    private:
  int fact;
  int n;
    public:
    void setN(int x)
    {
     n=x;
    }
    int getN()
    {
        return n;
    }
    int getfact()
    {
        return fact;
    }
    void calculatefact()
    {
        int i,f=1;
        if(n<=0)
        {
        fact=1;
        return ;
        }
        for(i=1;i<=n;i++)
        {
          f=f*i;
        }
        fact=f;
    }


};
int main()
{
    factorial f,a;
    f.setN(6);
    f.calculatefact();
    a.setN(5);
    a.calculatefact();
    cout<<"The factorial of "<<f.getN()<<" is "<<f.getfact()<<"\n";
    cout<<"The factorial of "<<a.getN()<<" is "<<a.getfact();
    return 0;
}