#include <iostream>
#include <iomanip> 
using namespace std;

const double SERVICE_FEE_SAVING = 10.00;
const double SERVICE_FEE_CHEKING = 25.00;
const double SAVING_INTEREST = 0.04;
const double CHECKING_HIGH_INTEREST = 0.05;
const double CHECKING_LOW_INTEREST = 0.03;
const double CHECKING_HIGH_BALANCE = 5000;

int main(){

    int accountNo;
    char accountType;
    double minBalance;
    double balance;

    cout << fixed << showpoint << setprecision(2);
    cout << "Please enter your account number, type, minimum balance and current balance: " << endl;
    cin >> accountNo >> accountType >> minBalance >> balance;
    cout << accountNo << " " << accountType << " " << minBalance 
            << " " << balance << endl;

    if (accountType == 'c' || accountType == 'C'){
        if (balance >= minBalance){
            if (balance <= minBalance + CHECKING_HIGH_BALANCE){
                balance += balance*CHECKING_LOW_INTEREST;}
            else
                balance += balance*CHECKING_HIGH_INTEREST;}
        else
            balance -= SERVICE_FEE_CHEKING;
        cout << "New Balance: " << balance << endl;
    }
    else if (accountType == 's' || accountType == 'S'){
        if (balance >= minBalance){
            balance += balance*SAVING_INTEREST;}
        else
            balance -= SERVICE_FEE_SAVING;
        cout << "New Balance: " << balance << endl;
    }
    else
        cout << "Invalid account type" << endl;

}