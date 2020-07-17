//Preprocessor Directives
#include <iostream>
using namespace std;

//Prototypes
double minsToSec(double mins);

//Global variables
double mins = 0;
double secs = 0;

int main() {

    cout<< "Enter the number of minutes you would like to convert into seconds...\n";
    cin >> mins;
    printf("%.2f minutes is %.2f seconds", mins, minsToSec(mins));

}

double minsToSec(double mins){

    secs = mins * 60;
    return secs;
}
