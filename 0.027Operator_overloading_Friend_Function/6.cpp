#include<iostream>
#include<cstring>
using namespace std;
class CString
{
  private:
    char str[30];
      public:
  void Get_string()
  {
    cout<<"\n\nEnter the string          : ";
    cin>>str;
  }
  void Display()
  {
    cout<<str<<endl;

  }
  CString operator+(CString x)//  &x
  {
    CString s;
    strcpy(s.str,str);
    strcat(s.str,x.str);
    return s;
  }
  int operator==(CString &t)  // t
  {
    for(int i=0;str[i]!='\0';i++)
    {
      for(int j=0;t.str[j]!='\0';j++)
      {
        if(str[i]==t.str[j])
        {
          return 0;
        }
        else 
        return 1;
      }
    }
  }
 
};
int main()
{
  CString str1,str2,str3;
  cout<<"\n------------------------------------------";
  str1.Get_string();
  
  str2.Get_string();
  cout<<"\n------------------------------------------";
  cout<<" \nThe first string is       : ";
  str1.Display();
  cout<<"\nThe Second string is       : ";
  str2.Display();
  cout<<"\n-------------------------------------------";
  str3=str1.operator+(str2);// str3=str1+str2;
  cout<<"\n\nConcatenated string is     : ";
  str3.Display();
  
  int result=0;
  result=str1==str2;
  //result=str1.operator==(str2);
  if(result==0)
  {
    cout<<"\nBoth Strings are Same ";
  }
  else
  {
    cout<<"\nStrings are Different";
  }
  
  return 0;
}
 