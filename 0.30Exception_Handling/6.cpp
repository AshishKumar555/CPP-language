#include<iostream>
using namespace std;
int main()
{
    int digit=0;
    char pincode[10];
    cout<<"\nEnter the pincode : ";
    gets(pincode);
    try
    {
            for(int i=0;pincode[i]!='\0';i++)
        {
        digit++;
        
        }
        
        if(digit==6)
        throw digit;
        else
        cout<<"\nPincode is Invalid : "<<digit;
    }
    catch(int digit)
    {
        cout<<"\nPincode is Valid : "<<digit;
    }
    return 0;
}