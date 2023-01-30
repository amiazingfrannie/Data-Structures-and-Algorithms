#include <iostream>
using namespace std;

bool isVowel(char ch);

int main(){

    char c;
    cout << "Enter a charactor: " << endl;
    cin >> c;
    if(isVowel(c)){
        cout << c << " is a vowel" << endl;
    }
    else cout << c << " is not a vowel" << endl;
    return 0;

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