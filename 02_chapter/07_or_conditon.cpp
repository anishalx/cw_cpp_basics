#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter your number here :";
    cin>>x;
    if (x%5==0 || x%3==0){
        cout<<"YES, your number is divisible by 3 or 5 ";
    }
    else{
        cout<<"NO,your number is not divisible by both number";
    }

}