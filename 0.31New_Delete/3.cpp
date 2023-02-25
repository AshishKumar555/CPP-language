#include<iostream>
using namespace std;
class Student
{
  protected:
  int subject[3];
  public:
  void accept_Detail()
  {
    cout<<"\nEnter the three subject marks : ";
    cout<<"\n------------------------------------";
    cout<<"\nEnglish : ";
    cin>>subject[0];
    cout<<"\nMaths : ";
    cin>>subject[1];
    cout<<"\nScience : ";
    cin>>subject[2];
  }

};
class TotalMarks:public Student
{
    protected:
      int Total;
      public:
      void totalmarkss()
      {
        Total=subject[0]+subject[1]+subject[2];
      }
};
class Calculate_Per:public TotalMarks
{
  protected:
   float Per;
   public:
   void Calculate_Persentage()
   {
    Per=Total/3;
   }
   void showDetail()
   {
    cout<<"\n----------------------------------";
    cout<<"\nThe Perventage of a Student : "<<Per;
   }
};
int main()
{
    Calculate_Per a1;
    a1.accept_Detail();
    a1.totalmarkss();
    a1.Calculate_Persentage();
    a1.showDetail();
    return 0;
}