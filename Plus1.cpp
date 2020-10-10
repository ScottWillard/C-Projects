#include <iostream>
using namespace std;

int plus1(int x);

int main() {

    int x;
    cout << "Enter an integer to add 1 to: " << endl;
    cin >> x;
    cout << plus1(x);

    return 0;
}

int plus1(int x){
    return x = x + 1;
}
