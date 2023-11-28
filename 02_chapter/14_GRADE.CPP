#include<iostream>
using namespace std;
int main(){
    int x ;
    cout<<"Enter your percentage here :";
    cin>>x;
    if (x>=81 && x<=100){
        cout<<"your percentage is very good";
    }
    else if (x>=61 && x<=80){
        cout<<"your percentege is good";
    }
    
    else if (x>=41 && x<=60){
        cout<<"your percentege is Average";
    }
    else if (x<=40){
        cout<<"OOPs u r fail";
    }
    else {
        cout<<"please ,enter the ur percentage btwn 1 and 100 ";
    }
    
    

}