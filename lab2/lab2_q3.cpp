#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch);
void removeVowel(string& str);

int main() {

    string inString;

    cout << "Enter a string: " << endl;
    // cin >> inString; // cin stops at whitespaces
    getline(cin, inString); // with getline, it'll read the sentence
    removeVowel(inString);
    cout << "After removing vowels: " << inString << endl;

    return 0;
}

void removeVowel(string& str){
    int len = str.length();
    int index = 0;

    while(index < len){
        if(isVowel(str[index])){
            // also can be done with replace method
            str = str.substr(0, index) + str.substr(index+1, len);
            len = str.length();
        }
        else
            index += 1;
    }
}

bool isVowel(char ch){

    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    default:
        return false;
    }
}