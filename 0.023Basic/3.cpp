#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    z=x+y;
    cout<<"The value of z is ==> "<<z;
    return 0;
}
//-----using function------------------
int sum(int a,int b,int c){
    cout<<"The result is "<<a+b+c;
}
