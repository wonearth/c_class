#include <iostream>
#include <string>               // 문자열 string 선언
using namespace std;

struct student {                // 구조체 선언
    string name;
    int a, b, c;
    int sum; double avg;
};

void func(student s[], int n);

int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;


    cout<< "학생 이름과 각 과목점수 입력" << endl;

    student s[3];                   // 구조체 배열 미리 선언
    for (int i = 0; i<3;i++){
        cout << "이름: "; getline(cin, s[i].name);  //getline(): 공백을 포함한 문자열 입력
        cout << "국어: "; cin >> s[i].a;
        cout << "영어: "; cin >> s[i].b;
        cout << "수학: "; cin >> s[i].c;

        cin.ignore();           // 입력 버퍼에 남아있는 Enter 제거
        cout << endl;
    }
        
    func(s, 3);
}

// 학생별 합계, 평균 및 과목별 통계를 출력하는 함수
void func(student s[], int n){
    cout << "이름\t국어\t영어\t수학\t합계\t평균" << endl;
    // 합계, 평균 부분
    for (int i = 0; i < n; i++) {
        s[i].sum = s[i].a + s[i].b + s[i].c;
        s[i].avg = s[i].sum / 3.0;          // 소수점 반올림 적용
        s[i].avg = (int)(s[i].avg * 100 + 0.5) / 100.0;

        cout << s[i].name << "\t"
             << s[i].a << "\t"
             << s[i].b << "\t"
             << s[i].c << "\t"
             << s[i].sum << "\t" << s[i].avg << endl;
    }
    // 과목별 평균 계산
    double avgA = (s[0].a + s[1].a + s[2].a) / 3.0; avgA = (int)(avgA * 100 + 0.5) / 100.0;
    double avgB = (s[0].b + s[1].b + s[2].b) / 3.0; avgB = (int)(avgB * 100 + 0.5) / 100.0;
    double avgC = (s[0].c + s[1].c + s[2].c) / 3.0; avgC = (int)(avgC * 100 + 0.5) / 100.0;

    cout << "과목avg\t"
         << avgA << "\t"
         << avgB << "\t"
         << avgC << endl;


    // 과목별 최고점 초기값을 첫 번째 학생의 점수로 초기화
    int maxA = s[0].a; int maxB = s[0].b; int maxC = s[0].c;

    // max 찾기
    for (int i = 1; i < n; i++) {
        if (s[i].a > maxA) maxA = s[i].a;
        if (s[i].b > maxB) maxB = s[i].b;
        if (s[i].c > maxC) maxC = s[i].c;
    }
    cout << "최고\t"
         << maxA << "\t"
         << maxB << "\t"
         << maxC << endl;


    // 과목별 최저점을 첫 번째 학생의 점수로 초기화
    int minA = s[0].a; int minB = s[0].b; int minC = s[0].c;

    // min 찾기
    for(int i=1; i<n; i++){
        if (s[i].a < minA) minA = s[i].a;
        if (s[i].b < minB) minB = s[i].b;
        if (s[i].c < minC) minC = s[i].c; 
    }
    cout << "최저\t"
        << minA << "\t"
        << minB << "\t"
        << minC << endl;
}