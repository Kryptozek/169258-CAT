#include <iostream>
#include <string>
using namespace std;

int main() {
    string username = "sam" , password = "hello";
    int option;

    cout << "Enter your username: ";
    cin >> username;
    
    cout << "Enter your password: ";
    cin >> password;


    if (username == "sam" && password == "hello" ) {
         cout << "Welcome to my simple App.Select an action to perform"<<endl;
         cout << "1. Go to About us Page"<<endl;
         cout << "2. Go to Services Page"<<endl;
         cout << "3. Go to full Profile Page"<<endl;
         cout << "4. Logout"<<endl;
         cin >> option;
         
    } 
    while(option!=4){
    switch (option) {
        case 1:
            cout << "I enjoy c++ programming because it is simple and clear" << endl;
            break;
        case 2:
            cout << "You can sell apps that solve a problem for the majority of the population to earn money"  << endl;
            break;
        case 3:
            cout << "My Name is Samuel Ptolomy"  << endl;
            cout << "I was bor in 21st March 2000"  << endl;
            cout << "I am Kenyan"  << endl;
            cout << "I am from Diani"  << endl;
            cout << "I am in Strathmore University"  << endl;
            cout << "I do BBIT"  << endl;
            break;
        default:
            cout << "Choose another option" << endl;
            break;

            


        }

    }
    cout<<"Logout Succesful";

    return 0;
}