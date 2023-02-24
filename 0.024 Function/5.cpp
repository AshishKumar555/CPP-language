#include<iostream>
using namespace std;
void fibnac(int n);
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    fibnac(n);
    return 0;
}
void fibnac(int x)
{
    int a=0,b=1,c=0;
    if(x==0||x==1)
    cout<<"fibnacci";
    c=a+b;
    while(c<x)
    {
     a=b;
     b=c;
     c=a+b;
     
    }
    if(c==x)
    cout<<endl<<"Fibnacci number";
    else
    cout<<endl<<"Not Fibnacci Number";
}
