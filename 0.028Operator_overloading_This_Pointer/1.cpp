#include<iostream>
using namespace std;
class Complex
{
    private:
    int real,img;
    public:
    friend Complex operator>>(istream &p,Complex &t)
    {
        
      cout<<"\nEnter the real number  : ";
      cin>>t.real;
      cout<<"\nEnter the imaginary number  : ";
      cin>>t.img;
    }
    friend ostream & operator<<(ostream &os,Complex &s)
    {
        os<<"Real = "<<s.real<<"  img = "<<s.img<<endl;
        return os;
    }
};
int main()
{
    Complex c1,c2;
    cin>>c1;
    cin>>c2;
    cout<<c1<<c2;//Do Object ek sath print karana h friend << function me return type & karenge jisase multiple object ek sath print ho sake 
    return 0;
}