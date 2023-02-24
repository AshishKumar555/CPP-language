#include<iostream>
using namespace std;
int power(int ,int );
int main()
{
    int n,m,p;
    cout<<"enter the base numbers";
    cin>>n;
    cout<<"Enter the exp no";
    cin>>m;
   p=power(n,m);
   cout<<"Result ==> "<<p;
    return 0;
}
int power(int x,int y)
{
    int result=1;
 while(y !=0)
 {
   result *=x;
   y--;
 }   
}