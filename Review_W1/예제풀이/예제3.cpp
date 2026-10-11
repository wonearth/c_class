#include <iostream>
using namespace std;

int main(){
    int score; cout << "점수를 입력하세요>>"; cin >> score;

    if(score > 100 || score < 0) cout << "잘못된 점수 입니다" << endl;

    int div = score/10;
    switch(div){
        case 10:
        case 9: cout << "A 입니다" << endl; break;
        case 8: cout << "B 입니다" << endl; break;
        case 7: cout << "C 입니다" << endl; break;
        case 6: cout << "D 입니다" << endl; break;
        case 5: cout << "F 입니다" << endl; break;
    }
}