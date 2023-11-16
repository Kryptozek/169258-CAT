#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;

    if (year%4==0)
    {
        cout<<"This is a leap year\n ";
    }else{
        cout<<"This is not a leap year\n ";
    }
    
    
    return 0;
}