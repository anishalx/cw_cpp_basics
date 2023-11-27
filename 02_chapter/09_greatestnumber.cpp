#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter your first number here :";
    cin>>x;
    int y;
    cout<<"Enter your second number here :";
    cin>>y;
    int z;
    cout<<"Enter your third number here :";
    cin>>z;
    if (x>y && x>z)
    cout<<"The greatest number is "<<x;
    else if(y>z&&y>x)
    cout<<"The greatest number is "<<y;
    else
    cout<<"The greatest number is "<<z;
}