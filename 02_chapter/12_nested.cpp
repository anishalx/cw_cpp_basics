#include<iostream>
using namespace std;
int main(){
    int x ;
    cout<<"Enter your first number here :";
    cin>>x;
    int y ;
    cout<<"Enter your second number here :";
    cin>>y;
    int z ;
    cout<<"Enter your third here :";
    cin>>z;
    if(x>y){
        if(x>z){
            cout<<"The graetest number is :"<<x;
        }
        else
            cout<<"The greatest number is :"<<z;
    }
    else{
        if(y>z){
            cout<<"The greatest number is :"<<y;
        }
        else{
            cout<<"The greatest number is :"<<z;
        }

    }
}