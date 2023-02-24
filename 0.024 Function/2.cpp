#include<iostream>
using namespace std;
int large (int );
int main()
{
    int n,max=0;
    cout<<"enter a number ";
    cin>>n;
    large(n);
    cout<<"The greatest digit ==> "<<large(n);
    return 0;
}
int large(int x)
{
    int r,max=0;
    while(x !=0)
    {
    r=x%10;
    if(max<r)
    {
        max=r;
    }
    x=x/10;
    }
    return max;
}
