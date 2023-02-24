#include<iostream>
using namespace std;
class square
{
    private:
    int x,y;
    public:
    void setN(int p)
    {
        x=p;
    }
    int getN()
    {
        return x;
    }
    int getsquare()
    {
     return y;
    }
    void calculatesquare()
    {
        int square;
        square=x*x;
        y=square;
    }
};
int main()
{
    square n;
    n.setN(5);
    n.calculatesquare();
    cout<<"The square of  "<<n.getN()<<" is "<<n.getsquare();
    return 0;
}