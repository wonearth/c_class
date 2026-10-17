#include <iostream>
using namespace std;

class Time{
int hour; int minute;
public:
    static bool isValid(int hour, int minute);
    void setTime(int hour, int minute);
    int getTime(char ch);
};
bool Time::isValid(int hour, int minute){       // 밖에서 선언할 때는 static 빼고 선언
    if(hour>=0 && hour <24 && minute >=0 && minute < 60) return true;
    else {
        cout << "Wrong Input" << endl;      // 잘못된 입력일 때 출력
        return false; 
    }
}
void Time::setTime(int hour, int minute){   
    if(isValid(hour, minute) == true) {     // 입력값이 올바르게 잘 들어가면
        this->hour=hour; this->minute=minute;   // hout, minute 저장
    }
}
int Time::getTime(char ch){     
    if(ch == 'H' || ch == 'h') return hour;     // hour 반환
    else if(ch == 'M' || ch == 'm') return minute;  // minute 반환
    return -1;                      // 잘못된 문자일 경우
}

int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    int hour, minute;
    cout << "Hour: "; cin >> hour;
    cout << "Minute: "; cin >> minute;

    if(!Time::isValid(hour,minute)) return 0;     // 입력값이 올바른지 먼저 확인(static)

    Time t;  
    t.setTime(hour, minute);        // 위에 것 통과되면 입력값 저장
    cout << t.getTime('H') << ":" << t.getTime('M') << endl;    // 입력값 형식에 맞추어서 출력
}