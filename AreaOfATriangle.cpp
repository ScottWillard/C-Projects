#include <iostream>
using namespace std;

double getAreaOfTriangle(double base, double height);

int main() {

    double base, height;

    cout << "Enter the length of the base and\nthe height  of the triangle\nto get the area of \nthe triangle:\n";

    cin >> base >> height;

    cout << getAreaOfTriangle(base, height);

}

double getAreaOfTriangle(double base, double height){

    return (base/2) * height;
}