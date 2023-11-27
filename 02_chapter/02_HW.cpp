//write a code and take input from a user as positive intiger and tell that it is divisible by 5 or not

#include<iostream>
using namespace std;
int main() {
    int x;
    cout<<"Enter a positive number here:"<<endl;
    cin>>x;
    if(x%5==0)
    cout<<"The given numbber is divisible by five"<<"\n";
    else{
        cout<<"The given number is not divisible by five"<<"\n";
    }


}