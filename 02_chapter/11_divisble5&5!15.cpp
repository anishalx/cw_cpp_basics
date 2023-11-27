#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter your number here :";
    cin>>x;
    if ((x%5==0 || x%3==0)&& x%15!=0){
        cout<<"your number is divisible by 3 or 5 but not by 15";
    }
    else{
        cout<<"OOPS! your number is not correct";
    }
}