// #include<iostream>
// using namespace std;
// int main()
// {
//     int x,y,z;
//     cout<<"Enter two numbers"<<endl;
//     cin>>x>>y;
//     z=x+y;
//     cout<<"The value of z is ==> "<<z;
//     return 0;
// }
//-----using function------------------------------------------------------------------!

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace::std;

void sum(int a,int b,int c=1){   //default parameter
    cout<<"The result is "<<a+b+c;
}
int main() {
    // Write C++ code here
    std::cout << "Hello world!"<<endl;
    sum(10,20);
    return 0;
}
