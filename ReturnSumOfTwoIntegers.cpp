#include <iostream>

using namespace std;

int addition(int x, int y);

int main() {

    int x, y;
    cout << "Enter 2 numbers: " << endl;
    cin >> x;
    cin >> y;
    cout << addition(x, y);

    return 0;
}

int addition(int x, int y){

    return x + y;
}