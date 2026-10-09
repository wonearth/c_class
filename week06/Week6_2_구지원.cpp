#include <iostream>
#include <string>
using namespace std;

class Person{
    int id; double score; string name;
    static double sum; // 학점 함계 저장
    static int num;  // 학생 수 저장
public:
// 디폴트 매개변수를 가진 생성자
    Person(int id=1, string name="Tom", double score=3.5){  // 인자 전달X 일때 값으로 사용    
        this->id = id; this->score=score; this->name=name;
        sum += score;  num++;       // 객체 생성 시 학점 합계와 학생 수 누적
    }
    ~Person() { cout << name << "삭제" << endl; }   // 소멸자

    void show() {                   // 학생 정보 출력
        cout << id << ' ' << name << ' ' << score << endl;
    }
    // 평균 계산해서 반환
    static double avgcom(){     // 전체 학점 합계를 학생 수로 나누어 평균 반환
        return sum/num;
    }
};
// static 멤버변수 정의 (0으로 초기화함)
double Person::sum = 0;
int Person::num = 0;

int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    Person tom, jane(2,"Jane"), john(3, "John", 2.5);
    tom.show(); jane.show(); john.show();
    cout << "average:" << Person::avgcom() << endl; // static 함수를 이용하여 전체 학생의 평균 출력
}