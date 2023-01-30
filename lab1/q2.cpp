#include <iostream>
#include <cmath> 
using namespace std;

const double COST_PER_LITER = 0.38;
const double PROFIT_PER_CARTON = 0.27;
const double LITER_PER_CARTON = 3.78;

int main(){

    int cartonNums;
    double totalLiters;
    double profit;
    double totalCost;

    cout << "Enter the total amount of milk produced in morning: " << endl;
    cin >> totalLiters;
    cartonNums = ceil(totalLiters / LITER_PER_CARTON);
    totalCost = totalLiters * COST_PER_LITER;
    profit = cartonNums * PROFIT_PER_CARTON;

    cout << "Total Carton Used: " << cartonNums << endl;
    cout << "Total Cost: " << totalCost << endl;
    cout << "Total Profit: " << profit << endl;
 
}