#include <iostream>
using namespace std;

const int DIVIDER = 10;

int reverseDigit(int num);

int main(){

    int num;
    cout << "Enter an integer: " << endl;
    cin >> num;
    cout << "Reversed number is : " << reverseDigit(num) << endl;
    return 0;
}

int reverseDigit(int num){

    int reminder;
    int reversedNum = 0;
    bool isNegative = false;

    if (num<0){
        num = -num;
        isNegative = true;
    }

    while (num > 0){
        reversedNum = reversedNum * 10 + num % DIVIDER;
        num = num / DIVIDER;
    }

    if (isNegative){
        reversedNum = -reversedNum;
    }
    return reversedNum;

}