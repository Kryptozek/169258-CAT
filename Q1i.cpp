#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3;
    int option;

    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    if (num1 < num2 && num1 < num3) {
        option = 1; // num1 is smaller
    } else if (num2 < num1 && num2 < num3) {
        option = 2; // num2 is smaller
    } else if (num3 < num1 && num3 < num2) {
        option = 3; // num3 is smaller
    }else{
        option = 4;// all the numbers are equal
    }

    switch (option) {
        case 1:
            cout << "The smallest number is: " << num1 << endl;
            break;
        case 2:
            cout << "The smallest number is: " << num2 << endl;
            break;
        case 3:
            cout << "The smallest number is: " << num3 << endl;
            break;
        case 4:
            cout << "Both numbers are equal." << endl;
            break;
    }

    return 0;
}