   /*#include<iostream>
using namespace std;
class Counter
{
  private:
   static int count;
   public:
   
     Counter()
     {
       count=0;
     }
     void inc_count()
     {
        count++;
     }
     int get_count()
     {
      return count;
     }
};    
int Counter::count;
int main()
{
  Counter c1;//when we call int count then count++;.....
  cout<<c1.get_count();
  cout<<"\n";
  c1.inc_count();
  cout<<c1.get_count();
  return 0;
}
*/
#include<iostream>
using namespace std;
class Counter
{
  private:
  static int count;
  public:
  Counter()
  {
    count++;
  }
  int getcounter()
  {
   return count;
  }
};
int Counter::count;
int main()
{
  Counter c1,c2,c3; //result== object;.........
  cout<<c2.getcounter();
  return 0;
}