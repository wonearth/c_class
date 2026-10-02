#include <iostream>
using namespace std;

class Dept {
    int size;int *score;
public:
    Dept(int size){ this -> size = size; score = new int[size]; cout << "(일반 생성자 실행)" << endl; }
    Dept(const Dept& dept){ size = dept.size; score = new int[size];  // 복사 생성자 
        for(int i=0; i<size; i++) score[i] = dept.score[i];
        cout << "(복사 생성자 실행)" << endl;
    }
    ~Dept(){ delete[] score; cout << "(소멸자 실행)" << endl; }
    int getsize() { return size; }
    void input(){                                   // 점수 입력 멤버함수
        for(int i=0; i<size; i++){
            cin >> score[i];
        }
    }
    bool over60(int index){ return score[index] >= 60; }    // 60점 이상인지 확인
    int getSum(){                                           // 점수 합계
        int sum = 0;                              
        for(int i=0; i<size; i++) sum += score[i]; return sum; 
    }    
};

void result(Dept dept, int& cnt60, double& avg){            //전역함수 (sum, avg 결과 출력하는 함수)
    for(int i=0; i<dept.getsize(); i++){                    // 60점 이상 학생 수 확인 (반복문으로 전체 확인)
        if(dept.over60(i)) cnt60++;                         // 60점 이상이면 cnt60 증가 (bool over60 멤버함수 호출)
    }
    avg = (int)dept.getSum() / dept.getsize();
}

int main(){
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    cout << "<학과 1>" << endl << "학생수:";
    int n; cin >> n; cout << n << "개 점수 입력" << endl;

    Dept dept1(n); dept1.input();     // 객체 생성1, n개 점수 입력
    int cnt60 = 0; double avg = 0;      // 초기화

    result(dept1, cnt60, avg);        // 결과 호출
    cout << "60점 이상은 " << cnt60 << "명" << endl; cout << "점수 평균은 " << avg << "점" << endl << endl;

    cout << "<학과 2>" << endl; cnt60 =0; avg = 0;     // 초기화
    Dept dept2(dept1); result(dept2, cnt60, avg);        // 객체 생성2, 결과 호출
    cout << "60점 이상은 " << cnt60 << "명" << endl; cout << "점수 평균은 " << avg << "점" << endl << endl;
}