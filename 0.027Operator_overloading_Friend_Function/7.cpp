#include<iostream>
using namespace std;
class fraction
{
    private:
  long Num;
  long Den;
  public:
  fraction()
  {
    Num=0;
    Den=0;
  }
  friend void operator>>(istream &in,fraction &f)
  {
    cout<<"\n Numerator  : ";
    in>>f.Num;
    cout<<"\nDenominator : ";
    in>>f.Den;
  }
  friend void operator<<(ostream &out,fraction &f)
  {
   out<<f.Num<<"/"<<f.Den;

  }
  fraction operator++()//Pre increment-------------!
  {
    ++Num;
    ++Den;
    return (*this);
  } 
  fraction operator++(int g)//Post increment--------!
  {
    fraction tmp=(*this);
    Num++;
    Den++;
    return tmp;
  }
};
int main()
{
    fraction f1,f2;
    cout<<"\nf1      : ";
    cout<<f1;
    cout<<"\nf2      : ";
    cout<<f2;
    cout<<"\n----------------------------------------------!";
    cout<<"\n\nEnter 1st fraction value\n";
    cin>>f1;
    cout<<"\nf1++    : ";
    f1++;
    cout<<f1;
    cout<<"\n++f1    : ";
    ++f1;
    cout<<f1;
    cout<<"\n----------------------------------------------!";
    cout<<"\nEnter second fraction value \n";
     cin>>f2;
    cout<<"\nf2++    : ";
    f2++;
    cout<<f2;
    cout<<"\n++f2    : ";
    ++f2;
    cout<<f2;
    cout<<"\n----------------------------------------------!";
    return 0;
}