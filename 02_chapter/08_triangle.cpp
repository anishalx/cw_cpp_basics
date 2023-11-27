#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the first side of a triangle here :";
    cin>>a;
    int b;
    cout<<"Enter the second side of a triangle here :";
    cin>>b;
    int c;
    cout<<"Enter the third side of a triangle here :";
    cin>>c;
    // if (a+b>c && b+c>a && c+a>b){
    if ((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"The values of a sides are correct";
    }
    else{
        cout<<"The values of a sides are not correct";
    }

}