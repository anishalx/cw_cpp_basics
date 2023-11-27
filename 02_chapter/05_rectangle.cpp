#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter the length of a rectangle here : ";
    cin>>l;
    int b;
    cout<<"Enter the breadth of a rectangle here :";
    cin>>b;
    int a = l*b;
    int p = 2*(l+b);
    if (a>p){
        cout<<"your area is greater than a perimeter :"<<endl;
    }
    else{
        cout<<"your perimeter is greater than the area"<<endl;
    }
    


}