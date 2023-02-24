#include<iostream>
using namespace std;
class Matrix
{
  private:
    int a[3][3];
  public:
    void accept();
    void Display();
    void operator-();
    
};
void Matrix::accept()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
}
void Matrix::Display()
{
    cout<<"\nMatrix is  : \n\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           // cout<<" ";
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
  
}
 void Matrix::operator-()
   {
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=-a[i][j];
        }
    }
   }
   int main()
   {
     Matrix m1;
    cout<<"\nEnter Matrix Element (3x3) : \n";
    cout<<"\n---------------------------------------!\n";
     m1.accept();
       cout<<"\n------------------------------------!\n";
     m1.Display();
       cout<<"\n------------------------------------!\n";
     cout<<"\n The negated Matrix is : \n";
       cout<<"\n------------------------------------!\n";
     //m1.operator-();
     -m1;
     m1.Display();
     return 0;
   }