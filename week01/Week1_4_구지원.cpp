#include <iostream>
using namespace std;

int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    int month;
    while(true){    // 무한 반복 
        cout << "Input month(Input 0 to finish): "; 
        cin >> month;

        if(month == 0) break;       // 0 입력시 종료
        // 31일인 달 (0이 아닌 경우)
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            cout << "31 days in month " << month<< endl;
        // 30일인 달 (0이 아닌 경우)
        } else if(month == 4 || month == 6 || month == 9 || month == 11){
            cout << "30 days in month "  << month << endl;
            // 2월인 달 (0이 아닌 경우)
        } else if(month == 2){
            cout << "28 days in month " << month << endl;
        // 잘못된 입력
        } else {
            cout << "wrong input" << endl;
        }
    }

}