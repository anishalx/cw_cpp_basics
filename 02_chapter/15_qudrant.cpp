#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Entre your first value with sign here :";
    cin>>x;
    int y;
    cout<<"Entre your second value with sign here :";
    cin>>y;
    if (x>=0 && y>=0){
        if(x==0 && y>0){
            cout<<"The values lies on the +ve y axis ";
        }
        else if (x>0 && y==0){
            cout<<"The values lies on the +ve x axis";
        }
        // else if(x>0 && y>0)
        else{
            cout<<"The values lies in the first quadrant";
        }
    }
    else if(x<0 && y>0){
        cout<<"The values lies in the second quadrant";
    }
    else if(x<=0 && y<=0){
        if(x==0 && y<0){
            cout<<"The values lies on the -ve y axis ";
        }
        else if (x<0 && y==0){
            cout<<"The values lies on the -ve x axis";
        }
        // else if(x>0 && y>0)
        else{
            cout<<"The values lies in the third quadrant";
        }
    }
    else{
        cout<<"The values lies in the fourth quadrant";
    }

}