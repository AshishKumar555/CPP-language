#include<iostream>
using namespace std;
class mystring
{
  private:
    char str[100];
  public:
    void accept();
    void Display();
    void operator !();
};
void mystring::accept()
{
   cin>>str;
}
void mystring::Display()
{
    cout<<str;
}
void mystring::operator!()
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>=65&&str[i]<=90)
        {
         
         str[i]=str[i]+32;
        }
    }
    cout<<"\n\nReverse case String is   :  "<<str;
}
int main()
{
    mystring s1;
    cout<<"\n-------------------------------------!\n";
    cout<<"Enter the strings : ";
    s1.accept();
   s1.Display();
   !s1;
  // s1.operator!();
    return 0;
}