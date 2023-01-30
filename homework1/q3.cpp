#include <iostream>
using namespace std;

int main(){

    int population_A, population_B;
    double growthRate_A, growthRate_B;

    cout << "pls enter the population of A town and B town (population of A should be less than B): " << endl;
    cin >> population_A >> population_B;
    cout << "pls enter the growth rate of A and B(growthrate of A should be greater than B): " << endl;
    cin >> growthRate_A >> growthRate_B;

    int year = 0;
    while (population_A < population_B){
        population_A += population_A * growthRate_A;
        population_B += population_B * growthRate_B;
        year ++;
    }

    cout << "after " << year << " years, population of A would exceed B" << endl;
    cout << "the population of A is " << population_A << endl;
    cout << "the population of B is " << population_B << endl;    
    return 0;

}