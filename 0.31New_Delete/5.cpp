#include<iostream>
using namespace std;
class Item
{
    public:
  int item_no;
  char name[50];
  float price;
  public:

};
class Discount_Item:public Item
{
 public:
 float discount_percentage;
 public:
void Accept_detail()
{
    cout<<"\n----------------------------------";
    cout<<"\nEnter Item name : ";
    cin>>name;
    cout<<"\nEnter Item no. : ";
    cin>>item_no;
    cout<<"\nEnter Item Price : ";
    cin>>price;
    cout<<"\n Enter Discount Percentage : ";
    cin>>discount_percentage;
}
void showDetail()
{
    cout<<"\n---------------------";
    cout<<"\n\nItem Name : "<<name;
    cout<<"\nItem No. : "<<item_no;
    cout<<"\nItem Price : "<<price;
    cout<<"\nDiscont Percent : "<<discount_percentage;
    cout<<"\nDiscounted Price : "<<(price)-(price*discount_percentage)/100;
}
};
int main()
{
    int cnt,i;
    float TotalPrice=0,TotaldiscountPer=0,TotalDiscountPrice=0;
    Discount_Item a1[10];
    cout<<"\nEnter How many item you want to buy : ";
    cin>>cnt;
    int count=cnt;
    for(i=1;i<=cnt;i++)
    {
      a1[i].Accept_detail();
    }
    for(i=1;i<=cnt;i++)
    {
      a1[i].showDetail();
    }
    for( i=1;i<=cnt;i++)
    {
      TotalPrice=TotalPrice+a1[i].price;
      TotalDiscountPrice=TotalDiscountPrice+(a1[i].price)*(a1[i].discount_percentage)/100;

    }
   
    cout<<"\n-------------------------------";
    cout<<"\nTotal Price : "<<TotalPrice;
    cout<<"\nTotal Discount : "<<TotalDiscountPrice;
    cout<<"\nTotal Payble Amount : "<<TotalPrice-TotalDiscountPrice<<"\n\n";
    return 0;
}