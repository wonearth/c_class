#include <iostream>
#include <string>
using namespace std;

int main() {
    string song="Falling in love with you";
    string singer="Elvis Presley";
    
    string answer;
    cout << song + "를 부른 가수는(힌트 : 첫글자는 E)?";
    getline(cin, answer);
    //cin >> answer;       
    // => getline(cin, answer);로 바꾸면 공백이 포함된 문자열도 입력 가능
    // cin은 공벡 이전까지만 입력받음.

    if (answer == singer) {
        cout << "맞았습니다." << endl;
    } else {
        cout << "틀렸습니다. " + singer + "입니다." << endl;
    }
}