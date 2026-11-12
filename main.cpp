#include <iostream>
#include <limits>

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
    cout << a << " + " << b << " = " << (a + b) << endl;

    // 提示使用者按 Enter 結束，維持 console 畫面
    cout << "\nPress Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}