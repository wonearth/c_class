#include <iostream>
#include <string>
using namespace std;

int main() {
    string title = "Falling in love with you";
    string elvis("Elvis Presley"); string singer;

    cout << title + "를 부른 가수는(힌트 : 첫글자는 " + elvis[0] + ")?"; getline(cin, singer);
    if(singer == elvis) cout << "맞았습니다." << endl;
    else cout << "틀렸습니다. " + elvis + "입니다.";
}