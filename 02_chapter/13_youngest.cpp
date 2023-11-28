#include<iostream>
using namespace std;
int main(){
    // HERE THE RAM IS X AND SHYAM IS Y AND THE AJAY IS Z
    int x ;
    cout<<"Enter your first age here :";
    cin>>x;
    int y ;
    cout<<"Enter your second age here :";
    cin>>y;
    int z ;
    cout<<"Enter your third age here :";
    cin>>z;
    if(x<y){
        if(x<z){
            cout<<"The youngest age is :"<<x;
        }
        else
            cout<<"The youngest age is :"<<z;
    }
    else{
        if(y<z){
            cout<<"The youngest age is :"<<y;
        }
        else{
            cout<<"The youngest age is :"<<z;
        }

    }
}   