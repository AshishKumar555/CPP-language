#include<iostream>
using namespace std;
void primeNumber(int x);
int main()
{
    int n;
    cout<<"Enter the any number"<<endl;
    cin>>n;
    primeNumber(n);
    return 0;
}
void prime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            cout<<"Not Prime";
            break;
        }
    }    
        if(i==x)
        cout<<"Prime";
    
}
