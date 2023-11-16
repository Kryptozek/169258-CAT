#include <iostream>
using namespace std;

int main(){

    char userInput;
    cout<<"Enter a character: ";//prompts thge user for a character
    cin>>userInput;
    if(isalpha(userInput==1)){//checks if the value is a letter
    char lowerCaseChar = tolower(userInput);//changes the character to lower case
    if (lowerCaseChar=='a' || lowerCaseChar=='e' ||lowerCaseChar=='i' ||lowerCaseChar=='o' ||lowerCaseChar=='u'){
        cout << "This is a vowel";

    }else{
        cout << "This is a consonant";

    }
    }else{
        cout<<"This is not a letter";
    }
    return 0;

}