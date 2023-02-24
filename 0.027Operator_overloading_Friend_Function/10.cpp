#include<iostream>
using namespace std;
class  Matrix
{
  private:
    int a[3][3];
  public:
    void Accept();
    void Display();
     friend Matrix operator+(Matrix p,Matrix c )
     {
        Matrix m;
        for(int i=0;i<3;i++)
       {
        for(int j=0;j<3;j++)
        {
            m.a[i][j]=p.a[i][j]+c.a[i][j];
        }
       }  
       return m;  
     }  
};
void Matrix::Accept()
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
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main()
{
    Matrix m1,m2,m3;
    cout<<"\nEnter Matrix Element (3x3) : ";
    m1.Accept();
    cout<<"\nEnter Matrix Element (3x3) : ";
    m2.Accept();
    cout<<"\nFirst Matrix is : \n\n";
    m1.Display();
    cout<<"\nSecond Matrix is : \n\n";
    m2.Display();
    cout<<"\n\nAddition of Matrix : \n";
    m3=m1+m2;
   // m3=operator+(m1,m2);
    m3.Display();
    return 0;
}