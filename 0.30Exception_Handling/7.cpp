#include<iostream>
using namespace std;
#include<string.h>
#include<ctype.h>

int main()
{
    char UsName[15];
    int isDigit=0,ischar=0,isspecial=0,isException=0;
    cout<<"\nEnter the User Name : ";
    gets(UsName);
    try
    {
     if(strlen(UsName)>6)
     throw 1;  
     for(int i=0;UsName[i]!='\0';i++)
     {
        if(isdigit(UsName[i]))
        {
            isDigit=1;
        }
        if((UsName[i]>'a'&&UsName[i]<'z')||(UsName[i]>'A'&&UsName[i]<'Z')||(UsName[i]>'0'&&UsName[i]<'9'))
        {
          ischar=1;
        }
        else
        {
         isspecial=1;     
        }
        
     }
     if(isDigit==0)
      throw 2;
      if(isspecial==0)
      throw 3;
    }
    catch(int Num)
    {
       if(Num==1)
       cout<<"\nUser Name has more than 6 character :";
       if(Num==2)
       cout<<" \n Digit not found : ";
       if(Num==3)
       cout<<"\nSpecial character Not found : ";
       isException=1;
    }
    if(!isException)
    {
        cout<<"\nUser Name Accepted : ";
    }
    return 0;
}