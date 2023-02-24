#include<iostream>
using namespace std;
int main()
{
    char Email[100];
    cout<<"\nEmter the mail id : ";
    gets(Email);
    try
    {
          int flag=0;
        for(int i=0;Email[i]!='\0';i++)
        {
          
            if(Email[i]=='@')
            {
                 flag++;
                 throw flag;

            }
            
        }
        if(flag==0)
        throw 'c';
    }
    catch(int )
    {
        cout<<"\nThe mail id is Real : ";
    }
    catch(char )
    {
        cout<<"\nThe mail id is invalid : ";
    }
    
    return 0;
}