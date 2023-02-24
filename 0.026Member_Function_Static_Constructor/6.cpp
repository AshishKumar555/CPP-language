#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    int rollNo;
  int marks;
  public:
  student(string c,int R,int M)
  {
   name=c;
   rollNo=R;
   marks=M;
  }
  void showDetail()
  {
    cout<<name<<endl<<"rollNo : "<<rollNo<<"\n"<<" marks : "<<marks;
  }
};
int main()
{
    student s1("Ashish",20,400);
    s1.showDetail();
    return 0;
}