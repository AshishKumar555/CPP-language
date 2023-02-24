#include<iostream>
using namespace std;
class Complex
{
   private:
 int a,b;
   public:

        void setf1(int x,int y)
        {
            a=x;
            b=y;
        }
        Complex operator+(Complex p)
        {
            Complex temp;
            temp.a=a+p.a;
            temp.b=b+p.b;
            return temp;
        }
        Complex operator-(Complex c)
        {
            Complex temp;
            temp.a=a-c.a;
            temp.b=b-c.b;
            return temp;
        }
        void showf1()
            {
                cout<<"\na="<<a<<" "<<"b="<<b;
            }
            Complex operator*(Complex c)
        {
            Complex temp;
            temp.a=a*c.a;
            temp.b=b*c.b;
            return temp;
        }
        friend int operator==(Complex b,Complex c)
        {
          if(b.a==c.a&&b.b==c.b)
          return 1;
          else
          return 0;
        }
};
int main()
{
Complex c1,c2,c3,c4,c5;
int result;
c1.setf1(5,30);
c2.setf1(4,10);
c3=c1+c2;//c3=c1.operator+(c2);

c3.showf1();
c4=c1-c2;//c4=c1.operator-(c2);
c4.showf1();
c5=c1*c2;//c5=c1.operator*(c2);
c5.showf1();
result=operator==(c1,c2);
if(result)//==1 :
{
    cout<<"\nBoth object are Equal";
}
else
{
    cout<<"\nNot Equal";
}

    return 0;
}