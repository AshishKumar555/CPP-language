#include<iostream>
using namespace std;
int fact(int x);
int comb(int ,int );
int main()
{
    int n,i,j;
    cout<<"Enter the number of row"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++)
        {
            cout<<comb(i,j);
        }
        cout<<endl;
        
    }
    cout<<"Thank you";
    return 0;
}
int fact(int x)
{
    int fac;
    if(x<=0)
    return 1;
    for(int i=1;i=x;i++)
    {
     fac=fac*i;
    }
    return fac;
}
int comb(int n,int r)
{
   int com=fact(n)/fact(r)*fact(n-r);
   return com;
}