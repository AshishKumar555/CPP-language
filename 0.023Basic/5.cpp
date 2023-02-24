#include<iostream>
using namespace std;

int main()
{
    int length,breath,height,volume=0;
    cout<<"Enter the length, breath and height";
    cin>>length>>breath>>height;
    volume=length*breath*height;
    cout<<"The volume of cubide is ==>"<<volume;
    return 0;
}