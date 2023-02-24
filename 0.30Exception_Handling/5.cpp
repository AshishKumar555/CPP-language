#include<iostream>
using namespace std;
int main()
{
    int length=0;
    char num[15];
    cout<<"\nEnter the Mobile Number : ";
    cin>>num;
    try
    {
       for( i=0;num[i]!='\0';i++)
       {
        length++;
       }
       if(length==10)
       throw length;
       else
       cout<<"\n The mobile number is invalid : "<<length;
    }
    catch(int c)
    {
       cout<<"\nThe mobile number is valid : "<<c;
    }
    
    return 0;
}