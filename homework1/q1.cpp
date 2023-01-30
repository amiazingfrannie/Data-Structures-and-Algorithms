#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double radius, height, cubeside;

    cout << "pls enter the radius and height with space in between: " << endl;
    cin >> radius >> height;

    double cyl_volumn = M_PI * pow(radius, 2) * height;
    cubeside = pow(cyl_volumn, 1.0/3);
    
    cout << "the side of the cube is : " << cubeside << endl;
    return 0;

}