#include<iostream>
using namespace std;
class Time
{
  private:
  int Hours,Minutes,Second;
  public:
  Time()
  {
    Hours=Minutes=Second=0;
  }
  friend int operator>>(istream &input,Time &t)
  {
    cout<<"\nEnter the Hours    :";
    input>>t.Hours;
    cout<<"\nEnter the minutes  : ";
    input>>t.Minutes;
    cout<<"\nEnter the second   :";
    input>>t.Second;
    t.Minutes=t.Minutes+t.Second/60;
    t.Second=t.Second%60;
    t.Hours=t.Hours+t.Minutes/60;
    t.Minutes=t.Minutes%60;
    if(t.Hours>=25)
    return 1;
    else
    return 0;
  }
  friend void operator<<(ostream &output,Time &t)
  {
   output<<"\n Hours    :"<<t.Hours;
   output<<"\nMinutes   :"<<t.Minutes;
   output<<"\nSecond    :"<<t.Second;
  }
  int operator==(Time t1)
  {
    int tot=Hours*3600+Minutes*60+Second;
    int tot1=t1.Hours*3600+t1.Minutes*60+t1.Second;
    if(tot==tot1)
    return 1;
  else
  return 0;
  }
  ~Time()
  {

  }
  
};
int main()
{
  Time t2,t3;
  cout<<"\n This is  first Time " ;
  cout<<"\n-----------------------------";
  if(cin>>t2)//==1:
  {
    cout<<"Invalid Time ";
    return 0;
  }
  
  cout<<"First Time  ";
  cout<<t2;
  cout<<"\n\n This is Second Time ";
  cout<<"\n----------------------------";
  if(cin>>t3)
  {
    cout<<"\nInvalid Time  ";
    return 0;
  }
  cout<<"Second Time   ";
  cout<<t3;
  if(t2==t3)
  cout<<"\n\n Times are Same ";
  else
  cout<<"\nTimes are Different  ";
}