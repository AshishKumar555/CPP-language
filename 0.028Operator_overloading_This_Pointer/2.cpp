#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,img;
    public:
     void Set_Value(int real,int img)//Argument and instance variable same
    {  //hoga tab this pointer ka use karenge
     this->real=real;
     this->img=img;
    }
    friend ostream & operator<<(ostream &os,Complex &s)
    {
        os<<"Real = "<<s.real<<"  img = "<<s.img<<endl;
    }
};
int main()
{
    Complex c1,c2;
    c1.Set_Value(10,20);
    c2.Set_Value(30,40);
    cout<<c1<<c2;
    return 0;
}