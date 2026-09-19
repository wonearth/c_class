// \" 를 앞뒤로 넣으면 따옴표 됨
// \" 만 넣을 때는 따옴표 안으로 넣어주기

#include <iostream>
#include <string>
using namespace std;

class Song {
public:
    string title, singer;
    int price;
    void play(); void cost();
};
void Song::play(){
    cout << "\n";
    cout << "Song: \"" << title << "\" by \"" << singer << "\"" << endl;    
}
void Song::cost(){
    cout << price << "원입니다";
}

int main() {
    Song song;
    cout << "title: "; getline(cin, song.title);
    cout << "singer: "; getline(cin, song.singer);
    cout << "price: "; cin >> song.price;

    song.play(); song.cost();
}