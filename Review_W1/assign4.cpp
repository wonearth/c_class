#include <iostream>
using namespace std;

int main() {
    int month; 

    while(true) {       // 계속 반복 출력
        cout << "Input month(Input 0 to finish): ";
        cin >> month;

        if (month == 0) {
            cout << "Finished" << endl;
            break;                      // 0이면 빠져나감
        } else if (month < 1 || month > 12) {
            cout << "wrong input" << endl;
        } else if (month == 2){
            cout << "28 days in month 2" << endl;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            cout << "30 days in month " << month << endl;
        } else {
            cout << "31 days in month " << month << endl;
        }
    }
}