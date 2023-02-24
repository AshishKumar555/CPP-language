#include<iostream>
using namespace std;
class time
{
    private:
    int hour;
    int min;
    int sec;
    public:
    void settime(int x,int y,int z)
    {
     hour=x;
     min=y;
     sec=z;
    }
    void display()
    {
        cout<<hour<<" hr :"<<min<<" min :"<<sec<<" sec :"<<endl;
    }
};
int main()
{
    time a,b,c;
    a.settime(3,45,20);
    a.display();
    
    return 0;
}