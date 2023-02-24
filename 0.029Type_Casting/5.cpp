#include<iostream>
using namespace std;
class Invent2
{
    int y;
    public:
    Invent2(){}
    Invent2(int c)
    {
     y=c;
    }
    void display()
    {
        cout<<y<<endl;
    }
};
class Invent1
{
    int x;
    public:
    Invent1(){}
    Invent1(int e,int f)
    { 
      x=e+f;
    }
    operator float()
    {
        return x;
    }
    operator Invent2()
    {
        Invent2 i(x);
        return i;
    }
};

int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
    float tv;
    tv=s1;
    cout<<tv<<endl;
    d1=s1;
    d1.display();
    return 0;
}