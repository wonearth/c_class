#include <iostream>
using namespace std;

int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    int month; cout << "Input month: ";     // 입력받음
    cin >> month;

    switch(month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:   // 31일인 달
            cout << "31 days in month " << month<< endl;
            break;
        case 4: case 6: case 9: case 11:   // 30일인 달
            cout << "30 days in month "  << month << endl;
            break;
        case 2:  // 2월인 달
            cout << "28 days in month " << month << endl;
            break;
        default:        // 잘못된 입력 받았을 경우
            cout << "wrong input" << endl;
            break; 
    }

}