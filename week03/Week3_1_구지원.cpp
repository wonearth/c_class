#include <iostream>
#include <string>
using namespace std;

class Song {        // 클래스 생성
public:
    string title, singer;
    int price;
    void play();
    void cost();
};

void Song::play(){          // 멤버함수 1(Song 출력)
    cout << "\n";
    cout << "Song: \"" << title << "\" by \"" << singer << "\"" << endl;
}
void Song::cost(){          // 멤버함수 2(가격 출력)
    cout << price << "원입니다";
}

int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    
    Song song;                  // Song 이라는 객체 생성 
    cout << "*Song Information*" << endl;
    cout << "title: "; getline(cin, song.title);    // string 제목 입력 받음. 
    cout << "singer: "; getline(cin, song.singer);  // string 가수 입력 받음.
    cout << "price: "; cin >> song.price;

    song.play();        // 멤버함수1 받음
    song.cost();        // 멤버함수2 받음
    return 0;
}