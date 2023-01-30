#include <iostream>
using namespace std;

const int SEC_TO_HOUR = 3600;
const int SEC_TO_MIN = 60;

int main(){

    int seconds;
    int minutes;
    int hours;
    
    cout << "Enter the seconds:" << endl;
    cin >> seconds;

    hours = seconds/SEC_TO_HOUR;
    minutes = (seconds - hours*SEC_TO_HOUR)/SEC_TO_MIN;
    seconds = seconds - hours*SEC_TO_HOUR - minutes*SEC_TO_MIN;

    cout << "The equivalent time in hours:minutes:seconds is: " << endl;
    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;

}