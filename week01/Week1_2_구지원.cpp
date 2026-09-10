#include <iostream>
using namespace std;

int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    int month; cout << "Input month: ";
    cin >> month;

    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){   // 31일인 달
        cout << "31 days in month " << month<< endl;
    } else if(month == 4 || month == 6 || month == 9 || month == 11){   //30일인 달
        cout << "30 days in month "  << month << endl;
    } else if(month == 2){              // 2월 따로 정의
        cout << "28 days in month " << month << endl;
    } else {                            // 잘못된 입력
        cout << "wrong input" << endl;
    }

}