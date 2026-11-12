#include <iostream>
#include <limits>
#include "adder.h"

using namespace std;

int main() {
    int a = 0, b = 0;

    cout << "=========================" << endl;
    cout << " C++ Adder (CI/CD Demo)" << endl;
    cout << "=========================" << endl;

    cout << "Enter first integer a: ";
    if (!(cin >> a)) {
        cerr << "Error: Invalid integer input!" << endl;
        return 1;
    }

    cout << "Enter second integer b: ";
    if (!(cin >> b)) {
        cerr << "Error: Invalid integer input!" << endl;
        return 1;
    }

    cout << "\nResult:" << endl;
    cout << a << " + " << b << " = " << add(a, b) << endl;

    cout << "\nPress Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}