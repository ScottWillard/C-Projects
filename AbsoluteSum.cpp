#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int arr[5] = {}, total = 0;

    cout << "Enter 5 numbers: " << endl;

    for (int i = 0; i < 5; ++i) {
        scanf("%i ", &arr[i]);
    }

    printf("\n");
    for (int i = 0; i < 5; ++i) {
        total += (abs(arr[i]));
    }

    printf("\n");
    printf("%d", total);

}
