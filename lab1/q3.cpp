#include <iostream>
#include <cmath>
using namespace std;

const double TAX_RATE = 0.14;
const double CLOTHES_ACC_RATE = 0.10;
const double SUPPLIES_RATE = 0.01;
const double BONDS = 0.25;
const double ADDL_BONDS = 0.50;

int main(){
    
    double payRate;
    double workinghrsWeek;
    double income;
    double netIncome;
    double clothesAcc;
    double supplies;
    double bonds;
    double addlBonds;
    double hrs_week1;
    double hrs_week2;
    double hrs_week3;
    double hrs_week4;
    double hrs_week5;

    cout << "Enter your payrate and working hours seperated with space: " << endl;
    cin >> payRate >> hrs_week1 >> hrs_week2 >> hrs_week3 >> hrs_week4 >> hrs_week5;

    workinghrsWeek = hrs_week1+hrs_week2+hrs_week3+hrs_week4+hrs_week5;
    income = payRate * workinghrsWeek;
    netIncome = income * (1-TAX_RATE);

    cout << "Income before tax: " << income << endl;
    cout << "Income after tax: " << netIncome << endl;

    clothesAcc = netIncome * CLOTHES_ACC_RATE;
    supplies = netIncome * SUPPLIES_RATE;
    netIncome = netIncome - clothesAcc - supplies;

    cout << "Money spent on clothes and accessories: " << clothesAcc << endl;
    cout << "Money spent on school supplies; " << supplies << endl;

    bonds = netIncome * BONDS;
    cout << "Money spent on bonds: " << bonds << endl;

    addlBonds = bonds * ADDL_BONDS;
    cout << "Bonds from parents: " << addlBonds << endl;

}