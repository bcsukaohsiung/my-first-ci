#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0;
    
    cout << "=========================" << endl;
    cout << " C++ 加法計算器 (CI/CD 範例)" << endl;
    cout << "=========================" << endl;
    
    cout << "請輸入第一個整數 a: ";
    if (!(cin >> a)) {
        cerr << "錯誤：輸入的不是有效整數！" << endl;
        return 1;
    }

    cout << "請輸入第二個整數 b: ";
    if (!(cin >> b)) {
        cerr << "錯誤：輸入的不是有效整數！" << endl;
        return 1;
    }

    cout << "\n計算結果：" << endl;
    cout << a << " + " << b << " = " << (a + b) << endl;

    return 0;
}