#include<iostream>
using namespace std;
int add(int ,int ,int=1);
int main()
{
    int p,q,r;
    cout<<"Enter any two numbers"<<endl;
    cin>>p>>q;
    cout<<add(p,q)<<endl;
    cout<<"Enter any three number"<<endl;
    cin>>p>>q>>r;
    cout<<add(p,q,r)<<endl;

    return 0;
}
int add(int a,int b,int c)
{
    return a+b+c;
}