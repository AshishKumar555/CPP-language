#include<iostream>
using namespace std;
int main()
{
    int i,a[10],sum=0;
    cout<<"Enter the 10 numbers"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
     sum=sum+a[i];
    }
    cout<<"The sum is ==>  "<<sum;

    return 0;
}