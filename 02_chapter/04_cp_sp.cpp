#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Entre your CP here :" << endl;
    cin >> x;
    int y;
    cout << "Enter your SP here :" << endl;
    cin >> y;
    if (x > y)
    {
        cout << "you are in loss : " <<x-y<< endl;
    }
    else if (y > x)
    {
        cout << "you are in profit : " <<y-x<< endl;
    }
    else
    {
             cout << "you are in no profit no loss" << endl;
    }
}