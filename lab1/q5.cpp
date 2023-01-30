#include <iostream>
using namespace std;

int main(){

    char letter;
    int size;
    char response;

    cout << "Enter Y/y to proceed, any other keys to exit:" << endl;
    cin >> response;

    while (response == 'Y' || response == 'y'){

        cout << "Enter a number using letters: " << endl;
        cin >> letter;
        cout << endl;

        size = 0;

        while(size < 7){
            size ++;
            switch (letter)
            {
            case 'a':
            case 'b':
            case 'c':
            case 'A':
            case 'B':
            case 'C':
                cout << '2';
                break;
            case 'd':
            case 'e':
            case 'f':
            case 'D':
            case 'E':
            case 'F':
                cout << '3';
                break;
            case 'g':
            case 'h':
            case 'i':
            case 'G':
            case 'H':
            case 'I':
                cout << '4';
                break;
            case 'j':
            case 'k':
            case 'l':
            case 'J':
            case 'K':
            case 'L':
                cout << '5';
                break;
            case 'm':
            case 'n':
            case 'o':
            case 'M':
            case 'N':
            case 'O':
                cout << '6';
                break;
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                cout << '7';
                break;
            case 't':
            case 'u':
            case 'v':
            case 'T':
            case 'U':
            case 'V':
                cout << '8';
                break;
            case 'w':
            case 'x':
            case 'y':
            case 'z':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                cout << '9';
            }
            if (size == 3){
                cout << '-';
            }
            cin >> letter;
        }
        cin.ignore(100, '\n');
        cout << endl;
        cout << "Enter Y/y to proceed, any other keys to exit:" << endl;
        cin >> response;
    }

}
