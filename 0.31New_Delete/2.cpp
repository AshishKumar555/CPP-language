#include<iostream>
using namespace std;
class child
{
    protected:
 int num1;
 int num2;
 public:
  void accept()
  {
    cout<<"\nEnetr the two numberes\n";
    cin>>num1>>num2;
  }
};
class Parents:public child
{
 public:  
   int getsum()
   {
    return num1+num2;
   }
  
};
int main()
{
   Parents p1;
    p1.accept();
    cout<<p1.getsum();    
    return 0;
}