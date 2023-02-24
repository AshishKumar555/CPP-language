#include<iostream>
using namespace std;
class Box
{
 private:
   int length;
   int breath;
   int height;
   public:
   Box(int l,int b,int h)
   {
    length=l;
    breath=b;
    height=h;

   }
   void calculateVolume()
   {
    cout<< length*breath*height;
   }

};
int main()
{
    Box c1(2,3,5),c2(2,4,5);
    c1.calculateVolume();
    cout<<"\n";
    c2.calculateVolume();
    return 0;
}