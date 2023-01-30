#include <iostream>

using namespace std;

int main(){

    double lengthOfYard, radius, space;

    cout << "pls enter the length of yard, radius of a tree and the space between trees: " << endl;
    cin >> lengthOfYard >> radius >> space;

    double spaceOfOneTree = radius*2 + space;
    int numOfTrees = lengthOfYard / spaceOfOneTree;
    double spaceOccupied = numOfTrees*spaceOfOneTree;

    cout << "the number of tress can be planted is : " << numOfTrees << endl;
    cout << "the space occupied by trees is : " << spaceOccupied << endl;

    return 0;

}