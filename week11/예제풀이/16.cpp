#include <iostream>
#include <iomanip>          // set 함수들을 위해서 필요
using namespace std;

int main() {
    cout << showbase;       // 전체를 출력(0x)

    cout << setw(8)<< "Number";             // setw(width): 뒤에서부터 채움
    cout << setw(8) << "Octal";
    cout << setw(8) << "Hexa" << endl;
    
    // 10진수, 8진수, 16진수 순서대로 출력
    for(int i=0;i<50;i+=5){
        cout << setw(8) << setfill('.') << dec << i;
        cout << setw(8) << setfill(' ') << oct << i;
        cout << setw(8) << setfill(' ') << hex << i << endl;
    } 
    cout << fixed << setprecision(2) << 3.141592 << endl;       //fixed: 소수점 아래로 
}