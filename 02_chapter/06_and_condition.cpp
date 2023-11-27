#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the your number here :";
    cin>>x;
   /* if (x>99 && x<1000)
         cout<<"your number is three digit :";
    else{
        cout<<"your number is not a three digit ";
    }*/
    // if (x%5==0&&x%3==0){
    if (x%15==0){
        cout<<"the number is divisible by 5 and 3";
    }
    else{
        cout<<"the number is not divisible by 5 and 3";
    }
}