#include <iostream>
#include <stdlib.h>
using namespace std;

double sum(double x, double y);
double sub(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);
double square(double x);
int menu();

double x, y;

int main() {

    while(1){
    menu();

}
}

int menu() {
    cout << "1 to add: \n2 to subtract: \n3 to multiply: \n4 to divide: \n5 to square: \n";
    int option;
    cin >> option;
    switch (option) {

        case 1:
            cout << "Enter first number: "<<endl;
            cin >> x;
            cout << "Enter second number: "<<endl;
            cin >> y;
            sum(x, y);
            system("cls");
            break;

        case 2:
            cout << "Enter first number: "<<endl;
            cin >> x;
            cout << "Enter second number: "<<endl;
            cin >> y;
            sub(x, y);
            system("cls");
            break;

        case 3:
            cout << "Enter first number: "<<endl;
            cin >> x;
            cout << "Enter second number: "<<endl;
            cin >> y;
            multiply(x, y);
            system("cls");
            break;

        case 4:
            cout << "Enter first number: "<<endl;
            cin >> x;
            cout << "Enter second number: "<<endl;
            cin >> y;
            divide(x, y);
            system("cls");
            break;

        case 5:
            cout << "Enter the number to square: "<<endl;
            cin >> x;
            square(x);
            system("cls");
            break;

        default:
            cout << "WRONG!";
            break;

    }
    return option;
}
double sum(double x, double y){
    printf("%.0f + %.0f is %.2f", x, y, (x + y));
    cout<< x + y << endl;
    main();
    return x + y;
}

double sub(double x, double y){

    printf("%.0f - %.0f is %.2f", x, y, (x - y));
    cout << x - y << endl;
    main();
    return x - y;
}

double multiply(double x, double y){

    printf("%.0f * %.0f is %.2f", x, y, (x * y));
    cout << x * y << endl;
    main();
    return x * y;
}

double divide(double x, double y){

    printf("%.0f / %.0f is %.2f", x, y, (x / y));
    cout << x / y << endl;
    main();
    return x / y;
}

double square(double x){
    printf("%.0f * %.0f is %.2f", x, x,  (x * x));
    cout<<x * x<<endl;
    main();
    return x * x;
}
