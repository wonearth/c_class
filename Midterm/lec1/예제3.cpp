#include <iostream>
using namespace std;

int main() {
    int score; cout << "점수를 입력하세요>>"; cin >> score;

    int div = score/10;
    switch(div){
        case 9: cout << "A 입니다" << endl; break;
        case 8: cout << "B 입니다" << endl; break;
        case 7: cout << "C 입니다" << endl; break;
        case 6: cout << "D 입니다" << endl; break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            cout << "F 입니다" << endl; break;

        default:
            cout << "잘못된 점수입니다" << endl; break;
    }
}