#include <iostream>
using namespace std;

bool isPrime(int num);

int main(){

    int num;
    cout << "pls enter an integer in the range [0, 1000]: " << endl;
    cin >> num;

    if (num < 1 || num > 1000){
        cout << "Invalid Input" << endl;
        return 0;
    }
    if (isPrime(num)){
        cout << num << " is a prime" << endl;
    }
    else {
        cout << num << " is not a prime" << endl;
        if (num == 1) {return 0;}
        else {
            cout << "it's divided by: " << endl;
            if (num % 2 == 0) cout << "2" << endl;
            if (num % 3 == 0) cout << "3" << endl;
            if (num % 5 == 0) cout << "5" << endl;
            if (num % 7 == 0) cout << "7" << endl;
            if (num % 11 == 0) cout << "11" << endl;
            if (num % 13 == 0) cout << "13" << endl;
            if (num % 17 == 0) cout << "17" << endl;
            if (num % 19 == 0) cout << "19" << endl;
            if (num % 23 == 0) cout << "23" << endl;
            if (num % 29 == 0) cout << "29" << endl;
            if (num % 31 == 0) cout << "31" << endl;
        }
    }

    return 0;
}

bool isPrime(int num){
    if (num < 2) {return false;}
    if (num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num == 13 || num == 17 || num == 19 || num == 23 || num == 29 || num == 31) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0 || num % 11 == 0 || num % 13 == 0 || num % 17 == 0 || num % 19 == 0 || num % 23 == 0 || num % 29 == 0 || num % 31 == 0) {
        return false;
    }
    return true;
}