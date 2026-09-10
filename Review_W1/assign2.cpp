#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Input month: ";
    cin >> month;

    // '예외 처리 -> 특별 처리 -> 처리 -> 일반적인 경우' 순으로 if문 작성
    if (month < 1 || month > 12) {
        cout << "wrong input" << endl;
    } else if (month == 2){
        cout << "28 days in month 2" << endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "30 days in month " << month << endl;
    } else {
        cout << "31 days in month " << month << endl;
    }
}