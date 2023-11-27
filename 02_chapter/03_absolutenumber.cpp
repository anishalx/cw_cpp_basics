#include<iostream>
using namespace std;
int main(){

    
    int x;
    cout<<"Enter a number here :"<<"\n";
    cin>>x;
    /*
    if (x>=0){
        cout<<"your absolute value is "<<x<<endl;
        cout<<"you entered a +ve number"<<endl;
    }
    else{
        cout<<"your absolute value is "<<-x<<endl;
        cout<<"you entered a -ve number"<<endl;
    }

*/

//one line code for absolute value
     if(x<0) x=-x;
     cout<<"your absolute value is "<<x;

}