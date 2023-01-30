#include <iostream>
using namespace std;

int main(){

    int size = 0;
    int num;
    int evenSum = 0;
    int oddSum = 0;
    char response;

    while(size < 5){

        cout << "Enter an integer: " << endl;
        cin >> num;

        if(num % 2 == 0){
            cout << num << " is an even number" << endl;
            evenSum += num;
            }
        else {
            cout << num << " is an odd number" << endl;
            oddSum += num;
            }
        size ++;
    }

    cout << "Sum of even numbers is: " << evenSum << endl;
    cout << "Sum of odd numbers is: " << oddSum << endl;

    return 0;
}