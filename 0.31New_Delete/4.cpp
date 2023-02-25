#include<iostream>
#include<cstring>
using namespace std;
class Person
{public:
  char Name[50];
  char Address[50];
 unsigned int MobNumber;//0-2^n -1:
  public:


} ;
class Employee:public Person
{
  protected:
  int Eno;
  char Emname[50];
  public:

};
class Manager:public Employee
{
  public:
 char Degsignation[50];
 char DepartN[50];
 float Salary;
    public:
  void Accept_Detail()
  {
    cout<<"\nEnter Detail of Manager : ";
    cout<<"\n---------------------------------- ";
    cout<<"\nEnter Employ No. : ";
    cin>>Eno;
    cout<<"\nEnter Name : ";
    cin>>Name;
    cout<<"\nEnter Address : ";
    cin>>Address;
    cout<<"\nEnter Phone No. : ";
    cin>>MobNumber;
    cout<<"\nEnter Designation : ";
    cin>>Degsignation;
    cout<<"\nEnter Department Name : ";
    cin>>DepartN;
    cout<<"\nEnter Basic salary : ";
    cin>>Salary;
    
  }

};
int main()
{
    int i,cnt,temp=0;
    Manager man[100];
    cout<<"\nEnter how many Manager you want to Enter ? : ";
     cin>>cnt;
     for(i=1;i<=cnt;i++)
     {
      man[i].Accept_Detail();
     }
     for(i=1;i<=cnt;i++)
     {
      if(man[temp].Salary<man[i].Salary)
      {
        temp=i;
      }
     }
     cout<<"\nManager with the Highest Salary : "<<man[temp].Salary;
     cout<<"\nAnd , Manager Name is : "<<man[temp].Name;
    return 0;
}