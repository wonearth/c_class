#include <iostream>
using namespace std;

int main() {
    int month; cout << "Input month: ";
    cin >> month;

    // 정상값들 나열 -> 정상값 -> default 예외
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days in month " << month << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "30 days in month " << month << endl;
            break;
        case 2:
            cout << "28 days in month " << month << endl;
            break;
        default:
            cout << "wrong input" << endl;
    }
}