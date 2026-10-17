#include <iostream>
using namespace std;

class Circle{       // 문제에서 주어진 Circle 클래스 부분
int radius;
public:
    Circle(int radius=0){this->radius=radius;}          // 반지름 초기화
    int getRadius() {return radius;}    // 반지름 반환
    void setRadius(int radius) {this->radius = radius;} // 반지름 변경
    double getArea() {return 3.14*radius*radius;}   // 원의 넓이 계산
};
class NamedCircle : public Circle{      // Circle 클래스를 상속받음
string name;
public:
    void setName(string name){this->name = name;}   // name 변경
    string getName() {return name;} // name 반환
};

int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    int n; cout << "피자 개수 입력: "; cin >> n;
    cout << n << "개의 피자 반지름과 피자 이름 입력: " << endl;
    
    NamedCircle *pArray = new NamedCircle[n];       // 배열 동적할당
    int radius; string name;
    for(int i=0;i<n;i++){       // 배열에 입력받기
        cout << i+1 << ":"; 
        cin >> radius; pArray[i].setRadius(radius); // 반지름 입력받고 저장
        cin >> name; pArray[i].setName(name);       // 이름 입력받고 저장
    } cout << endl;

    cout << "<결과출력>" << endl;           // 앞에서의 입력 결과 출력
    for(int i=0;i<n;i++){
        cout << i+1 << ":" << pArray[i].getRadius() << ' ' << pArray[i].getName() << endl;
    }

    int max = 0; int min = 0;   // 배열에서의 최대 최소인 인덱스 값 알아내기
    for(int i=0;i<n;i++){
        if(pArray[i].getRadius() > pArray[max].getRadius()) max = i;
        if(pArray[i].getRadius() < pArray[min].getRadius()) min = i;
    } 

    // 마지막 출력
    cout << "가장 큰 피자: " << pArray[max].getName() << "(넓이: " << pArray[max].getArea() << ")" << endl;
    cout << "가장 작은 피자: " << pArray[min].getName() << "(넓이: " << pArray[min].getArea() << ")" << endl;

    delete[] pArray;        // 동적할당 해제
}