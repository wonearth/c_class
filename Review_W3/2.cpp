#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string title; string singer;                // song 이라는 객체 내부에 있는 "멤버변수"
    int price;
public:
    Song();
    Song(string t, int p);
    Song(string t, string s, int p);
    void play();
    int getPrice();
    ~Song();
};

Song::Song(){                                       // 생성자1 (사용X)
    title=""; singer=""; price=0;       // 실행 시 빈 객체 만듦. 
}
Song::Song(string t, int p){                        // 생성자2 (사용X)
    title=t; price=p;
    singer=""; 
}
Song::Song(string t, string s, int p){              // 생성자3
    title=t; singer=s; price=p;          // 실행 시 'Song("Ben", "Michael Jackson", 1000)' 저장
}
// 소멸
Song::~Song(){
    cout << "Song play 종료" << endl;
}

void Song::play() {
    cout << "\n";
    cout << "Song: \"" << title << "\" by \"" << singer << "\"" << endl;
}
int Song::getPrice() {
    return price;
}

int main() {
    cout << "*Song Information*" << endl;

    string title; string singer; int price;             // 메인의 "일반변수"
    cout << "title: "; getline(cin, title);
    cout << "singer: "; getline(cin, singer);
    cout << "price: "; cin >> price;

    // 여기서 처음 song 객체 생성
    Song song(title, singer, price);        // 실행 시 "생성자3"으로 이동해서 저장

    int x; cout << "몇번 들으시겠습니까?"; cin >> x;
    for(int i=0; i<x; i++){
        song.play();
    }
    cout << "총 " << song.getPrice() * x << "원입니다." << "\n" <<endl;
}