#include <iostream>
using namespace std;

double convertMinsToSecs(int mins);

int main() {

    int mins;
    cout << "Enter a number of minutes to be converted to seconds:" << endl;
    cin >> mins;
    convertMinsToSecs(mins);

    return 0;
}

double convertMinsToSecs(int mins){

    int seconds;
    seconds = mins * 60;
    printf("%d mins is %d seconds.\n", mins, seconds);

    return mins;
}