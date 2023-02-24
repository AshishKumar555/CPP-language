#include<iostream>
using namespace std;
int main()
{
    try
   {
    int num1,num2,ans;
    char Operator;
    cout<<"\nArithmetic operation on two numbers : ";
    cout<<"\n--------------------------------------";
    cout<<"\nEnter the first number : ";
    cin>>num1;
    if(num1==0)
    throw 0;//Integer throw-----------------------------!
    cout<<"\nEnter the operator : ";
    cin>>Operator;
    if(Operator !='+'&&Operator !='-'&&Operator !='*'&&Operator !='/')
    throw Operator;// Character throw -------------------!
    cout<<"\nEnter the Second number : ";
    cin>>num2;
    cout<<"\n-----------------------------------------!";
    switch(Operator)
    {
        case '+':
        ans=num1+num2;
        break;
        case '-':
        ans=num1-num2;
        break;
        case '*':
        ans=num1*num2;
        break;
        case '/':
        if(num2==0)
        throw 0;//Throw integer ---------------------------!
        ans=num1/num2;
        break;
    }
    cout<<"------------------------------------------!";
    cout<<"\nAnswer : "<<num1<<Operator<<num2<<" = "<<ans;
   }
   catch(int x)
   {
     cout<<"\n Invalid Operation :";
   }
   catch(char r)
   {
    cout<<"\nBad Operation : "<<r<<" is not valid\n";
   }
    return 0;
}