#include<iostream>
using namespace std;
int main()
{
  char NicName[15];
  int count=0;
  bool flag=false;
  bool valid=false;
  int special=0;
  cout<<"\nEnter the NickName : ";
  gets(NicName);
  try
  {
    
   for(int i=0;NicName[i]!='\0';i++)
  {
            count++;
            if(NicName[i]>='0'&&NicName[i]<='9')
            {
            flag=true;
            }
           if(NicName[i]==' ')
            {
            valid=true;
            }
          

  }
  
  if(valid)
  {
    cout<<"\nNick Name Contain a Space : ";
    throw 'c';
  }
  if(flag)
  {
    cout<<"\nNick Name should not contain a Digit : ";
    throw 'c';
  }
  if(count>8)
  {
    cout<<"\nNick Name must have less than 8 Character : ";
    throw 'c';
  }
  else
  cout<<"\n The Nick Name is Correct : ";
  }
  catch(char c)
  {
    cout<<"\nException Caught : ";
  }
  
    return 0;
}