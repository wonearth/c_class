#include <iostream>
#include <string>
using namespace std;

class StudentInformation {
    string name; string id;
public:
    StudentInformation(){name=""; id="";}       // 기본 생성자
    ~StudentInformation(){}                    // 소멸자
    void displayID(){ cout << name << '\t' << id << '\t'; }
    void inforInput(string name, string id){ this->name=name; this->id=id; }    // 이름,학번 저장
    void setID(string id){this->id=id;}         // 학번 변경
};

class StudentScore : public StudentInformation {        // 상속 받음
    int korean; int math; int english;
    int sum; double avg;
public:
    StudentScore(){                  // 기본 생성자
        korean=0; math=0; english=0;
        sum=0; avg=0;
    }
    ~StudentScore(){}               // 소멸자
    void displayScore(){
        displayID();               // 부모 클래스의 함수 호출 (이름, 학번 출력)
        cout << korean << '\t' << math << '\t' << english << '\t' << sum << '\t' << avg << endl;
    }
    void scoreInput(int korean, int math, int english){
        this->korean=korean; this->math=math; this->english=english;    // 과목별 점수 저장
    }
    void setSum(){ sum = korean + math + english; }  // 세 과목 합계 계산
    void setAvg(){ avg = sum / 3.0; }   // 평균 계산
};

// 학생 정보 입력
void arrayInput(StudentScore ss[], int num){
    string name, id;
    int korean, math, english;

    cout << "Input the Information." << endl;    // 입력 안내 시작

    for(int i=0;i<num;i++){
        cout << "ID: "; cin >> id;

        cin.ignore();                      // 입력 버퍼에 남은 엔터 제거
        cout << "Name: ";
        getline(cin, name);                // 공백 포함 이름 입력

        cout << "Korean: "; cin >> korean;
        cout << "Math: "; cin >> math;
        cout << "English: "; cin >> english;

        ss[i].inforInput(name, id);        // 이름, 학번 저장
        ss[i].scoreInput(korean, math, english);  // 점수 저장
        cout << endl;
    }
}

// 학생별 합계, 평균 계산
void scoreCompute(StudentScore ss[], int num){
    for(int i=0;i<num;i++){
        ss[i].setSum(); ss[i].setAvg();         // 합계와 평균 계산
    }
}

// 학생 정보 출력
void arrayOutput(StudentScore ss[], int num){
    cout << "NAME\tID\tKOREAN\tMATH\tENGLISH\tSUM\tAVG" << endl;
    for(int i=0;i<num;i++){ ss[i].displayScore(); }   // 각 학생 정보와 성적 출력
}


int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    int num; cout << "Number of students: "; cin >> num;

    StudentScore* ss = new StudentScore[num];               // 객체 배열 생성
    arrayInput(ss, num);        // 정보 입력함수 호출
    scoreCompute(ss, num);      // 합계와 평균 계산
    arrayOutput(ss, num);       // 정보 출력함수 호출

    delete[] ss;                // 메모리 반환
}