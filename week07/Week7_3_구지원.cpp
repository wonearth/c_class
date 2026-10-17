#include <iostream>
using namespace std;

class Electronics{                  // 조상 클래스
bool power;
public:
    Electronics() {power=false;}     // 생성자 선언 (초기 상태 false로 -> 전원꺼짐)
    void powerOnOff(){      
        power=!power;
        if(power) cout << "Power On" << endl;       // 첫 번째 호출: true → Power On
        else cout << "Power Off" << endl;        
    }
};
class Tv : virtual public Electronics{          // Electronics 상속받는 첫 번째 클래스
int channel;
public:
    void channelUp() {cout << "Channel Up" << endl; channel+=1;}    // 채널 1만큼 올림
    void channelDown() {cout << "Channel Down" << endl; channel -=1;}   // 채널 1만큼 감소
    void setChannel(int channel) {this->channel = channel;}         // 현재 채널 번호 설정
    int getChannel() {return channel;}  // 현재 채널 반환
};
class Vcr : virtual public Electronics{          // Electronics 상속받는 두 번째 클래스
int videoNum;
public:
    void setVideoNum(int videoNum) {this->videoNum = videoNum;} // 비디오 번호 설정
    int getVideoNum() {return videoNum;}        // 비디오 번호 반환
    void play() {cout << "Play video(Num " << videoNum << ")" << endl;}
    void stop() {cout << "Stop video(Num " << videoNum << ")" << endl;}
    void rew() {cout << "Rewind video(Num " << videoNum << ")" << endl;}
    void ff() {cout << "Fast forward~" << endl;}
};
class Tvcr : public Tv, public Vcr {        // Tv와 Vcr을 다중 상속받음
public: 
    int channelCheck() {return getChannel();}       // 현재 채널 번호 반환
};

int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    Tvcr t;     // 객체 생성
    int channel, vnum;

    t.powerOnOff();         // 전원 켜기
    cout << "Input channel num: "; cin >> channel;     
    t.setChannel(channel);      // 채널 설정
    t.channelUp();                          // 채널 올리기
    cout << "Current channel: " << t.channelCheck() << endl;        // 현재 채널 출력

    cout << "\nChoose a video num: "; cin >> vnum;
    t.setVideoNum(vnum);        // 비디오 선택
    t.play(); t.stop(); t.rew(); t.stop();  
    t.powerOnOff();     // 전원 끄기
}