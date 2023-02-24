#include<iostream>
using namespace std;
void test_try(int num)
{
   try
   {
     if(num>0&&num<10)
     throw num;
     else
     cout<<"It is not a Single Digit\n"; 
     throw;   
   }
   catch(int x)
   {
    cout<<"It is the Single digit Number : "<<x<<endl;
   }
   catch(char a[100])
   {
   cout<<a<<endl;
   }
   
}
int main()
{
  int num;
  cout<<"Enter the Number : ";
  cin>>num;
   test_try(num);
    return 0;
}