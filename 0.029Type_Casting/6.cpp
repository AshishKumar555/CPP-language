#include<iostream>
using namespace std;
class Time
{
    private:
    int min,hour,Sec;
    public:
    Time(){}
    Time(int y)
    {
     hour=y/3600;
     min=y/60;
    }
    void display()
    {
        cout<<" Hour = "<<hour<<" Min = "<<min<<" Sec = "<<Sec<<endl;
    }
    
};
int main()
{
    Time t1;
    int Duration;//in second
    cout<<"Enter Time in Seconds\n";
    cin>>Duration;
    t1=Duration;
    t1.display();
    return 0;
}