#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter any two number"<<endl;
    cin>>a>>b;
    swap(a,b);
    return 0;
}
void swap(int &m,int &n)
{
    m=m+n;
    n=m-n;
    m=m-n;
    cout<<"The value of m==>  "<<m<< " n==> "<<n<<endl;
}