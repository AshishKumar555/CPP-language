#include<iostream>
#include<cstring>
using namespace std;
class Person
{
  private:
  char name[50];
  int age;
   public:
    void setName(char *n)
   {
    strcpy(name,n);
   }
   void setAge(int x)
   {
    age=x;
   }
   void getName()
   {
    cout<<"\nName = "<<name;
   }
   void getAge()
   {
    cout<<"\nAge = "<<age;
   }
};
class Employ:public Person
{
  private:
   int Empid;
   int Salary;
   public:
     void
     setEmpid(int y)
     { 
      Empid=y;
     }
     void setSalary(int S)
     {
      Salary=S;
     }
     void getEmpid()
     {
        cout<<"\nEmpid = "<<Empid<<"\n\n";
     }
     void getSalary()
     {
        cout<<"\nSalary = "<<Salary;
     }
     

};
int main()
     {
        Employ E1;
        E1.setName("Himanshu Yadav");
        E1.setAge(22);
        E1.setSalary(30000);
        E1.setEmpid(1000);
        E1.getName();
        E1.getAge();
        E1.getSalary();
        E1.getEmpid();
        return 0;
     }