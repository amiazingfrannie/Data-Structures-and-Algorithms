#include <iostream>

using namespace std;

const int OPTION1_FINAL_PAYMENT = 5000;
const int OPTION1_FIRST_PAYMENT = 20000;
const double OPTION2_PAYRATE = 0.125;
const double OPTION3_PAYRATE1 = 0.1;
const double OPTION3_PAYRATE2 = 0.14;
const int OPTION3_NUM_OF_COPIES = 4000;

int main(){

    double price, totalValue_Option1, totalValue_Option2, totalValue_Option3; 
    int numOfSold;
    cout << "pls enter the price of each copy and the number of copies sold : " << endl;
    cin >> price >> numOfSold;

    totalValue_Option1 = OPTION1_FIRST_PAYMENT + OPTION1_FINAL_PAYMENT;
    totalValue_Option2 = OPTION2_PAYRATE * numOfSold * price;
    if(numOfSold <= 4000){
        totalValue_Option3 = OPTION3_PAYRATE1 * numOfSold * price;
    }
    else{
        totalValue_Option3 = OPTION3_PAYRATE1 *OPTION3_NUM_OF_COPIES * price + OPTION3_PAYRATE2 * price * (numOfSold - OPTION3_NUM_OF_COPIES);
    }

    cout << "Option 1: $" << totalValue_Option1 << endl;
    cout << "Option 2: $" << totalValue_Option2 << endl;
    cout << "Option 3: $" << totalValue_Option3 << endl;

    double bestOption = max(totalValue_Option1, max(totalValue_Option2, totalValue_Option3));
    cout << "The best option is: ";
    if (bestOption == totalValue_Option1) {
        cout << "Option 1" << endl;
    } else if (bestOption == totalValue_Option2) {
        cout << "Option 2" << endl;
    } else {
        cout << "Option 3" << endl;
    }

    return 0;

}