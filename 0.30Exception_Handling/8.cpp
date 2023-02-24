#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    char Usr[20];
    char pass[20];
    cout<<"\nEnter the user name : ";
    gets(Usr);
    cout<<"\n Enter the Password  : ";
    gets(pass);
    try
    {
        if(strlen(pass)<6)
        {
        cout<<" \nPassword must have at least 6 Digit : ";
        throw 'c';
        }
        bool flag=false;
        bool valid=false;
       for(int i=0;pass[i]!='\0';i++)
       {
        if(isdigit(pass[i]))
        {
            flag=true;
        }
       }
       if(!flag)
       {
        cout<<"\nPassword must have at least One Digit (0-9) ";
        throw 'c';
       }
       else
       cout<<"\nPassword is Correct : ";
    }
    catch(char c)
    {
        cout<<"\nException Caught : ";
    }
    catch(...)
    {
        cout<<"\n Default Exception is called : ";
    }
    
    return 0;

}