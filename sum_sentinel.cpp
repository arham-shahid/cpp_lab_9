#include <iostream>
using namespace std;

int main()
{    
    int num = 0;
    int total = 0;
    while( num>=0)
    {
        total = total + num;
        cout<<"Enter any positive integer: ";
        cin>>num;
    }
    cout<<"Sum of positive integers is: "<<total<<endl;
    return 0;
}