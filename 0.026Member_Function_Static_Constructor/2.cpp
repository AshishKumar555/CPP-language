#include<iostream>
using namespace std;
class Time
{
      
      private:
      int   HRS,MIN,SEC;
      public:
     
      void setTime(int x,int y,int z)
      {
        HRS=x;MIN=y;  SEC=z;
      }
            void showTime(){cout<<HRS<<":"<<MIN<<":"<<SEC<<endl;}
      void normalize()
      {
         
         MIN=MIN+SEC/60;
         SEC=SEC%60;
         HRS=HRS+MIN/60;
         MIN=MIN%60;        
      }
      Time add(Time A2)
      {
            Time temp;
        cout<<"The addition is ==> ";
         temp.SEC=SEC+A2.SEC;
         temp.MIN=MIN+A2.MIN;
         temp.HRS=HRS+A2.HRS;
         temp.normalize();
         return (temp);
         
       // cout<<SEC+A2.SEC<<" :"<<MIN+A2.MIN<<" :"<<HRS+A2.HRS<<endl;
       //Like this not normalized ........!
      }
};
int main()
{
    Time A1,A2,A3;
    A1.setTime(5,50,30);
    A2.setTime(7,20,34);
   
 
    A1.showTime();
    A2.showTime();
     A3=A1.add(A2);
     
     A3.showTime();
    return 0;
}