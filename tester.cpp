#include <iostream>
#include <cassert>
#include "adder.h"

using namespace std;

int main() {
    cout << "Starting Unit Tests..." << endl;

    // 測試案例 1：正整數相加
    assert(add(10, 20) == 30);
    cout << "[PASS] Test 1: 10 + 20 == 30" << endl;

    // 測試案例 2：負數與正數相加
    assert(add(-5, 5) == 0);
    cout << "[PASS] Test 2: -5 + 5 == 0" << endl;

    // 測試案例 3：零值相加
    assert(add(0, 0) == 0);
    cout << "[PASS] Test 3: 0 + 0 == 0" << endl;

    cout << "All unit tests passed successfully!" << endl;
    return 0;
}