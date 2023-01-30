#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 50;
void initialize(double list[], int size);
void print(double list[], int size);

int main(){

    double alpha[SIZE];
    initialize(alpha, SIZE);
    print(alpha, SIZE);
    return 0;

}

void initialize(double list[], int size){

    for(int i = 0; i < size/2; i++){
        list[i] = i*i;
    }
    for(int i = size/2; i < size; i++){
        list[i] = 3*i;
    }
}

void print(double list[], int size){

    for(int i = 0; i < size; i++){
        cout << setw(4) << list[i] << " "; // set width
        if((i+1)%10 == 0){
            cout << endl;
        }
    }
    cout << endl;
}