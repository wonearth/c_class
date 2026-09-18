#include <iostream>
#include <string>
using namespace std;

class Song {
private:                // private 멤버변수
    string title, singer;
    int price;
public:                 // public 생성자 및 멤버함수
    Song();             // default 생성자
    Song(string t, int p);                  // title, price 생성자
    Song(string t, string s, int p);        // title, singer, price 생성자
    ~Song();            // 소멸함수
    
    void play();
    int getPrice();
};

// 생성자1
Song::Song(){
    title = ""; singer = ""; price = 0;
}
// 생성자2
Song::Song(string t, int p){
    title = t; singer = ""; price = p;
}
// 생성자3
Song::Song(string t, string s, int p){
    title = t; singer = s; price = p;
}

void Song::play(){                      // 멤버함수 선언1
    cout << "\n";
    cout << "Song: \"" << title << "\" by \"" << singer << "\"" << endl;
}
int Song::getPrice(){                   // 멤버함수 선언2
    return price;
}
Song::~Song(){                          // 소멸함수
    cout << "\nSong play 종료" << endl;
}


int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    string title, singer;
    int price;

    cout << "*Song Information*" << endl;
    cout << "title: "; getline(cin, title);
    cout << "singer: "; getline(cin, singer);
    cout << "price: "; cin >> price;


    Song Song(title, singer, price);              // Song 객체 생성  적절한 생성자로 초기화
    // 반복출력
    int a;
    cout << "몇번 들으시겠습니까?"; cin >> a; cout << "\n"; 
    for(int i=0; i<a; i++){
        Song.play();
    }

    cout << "총 " << Song.getPrice() * a << "원입니다." << endl;       // 가격 출력
}