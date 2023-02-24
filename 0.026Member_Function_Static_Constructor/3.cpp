#include<iostream>
using namespace std;
class Cube
{
    public:
  double side;
  
   
    Cube()
    {
        cout<<"Default Constructor"<<endl;
        
    }
    
     double volume()
     {
       return side*side*side;
     }
     Cube (double side1)
     {
        cout<<"Constructor"<<endl;
        side=side1;
     }
     ~Cube()
     {
        cout<<"\nDestructing"<<side<<endl;
     }
};
int main()
{
    Cube c1(2.34),c2;
    cout<<"The side of cube is = "<<c1.side<<endl;
    cout<<"The volume of first cube = " <<c1.volume()<<endl;
    cout<<"Enter second cube side";
    cin>>c2.side;
    cout<<"volume of second cube = "<<c2.volume()<<endl;
    return 0;
}