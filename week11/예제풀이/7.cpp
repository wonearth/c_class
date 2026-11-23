#include <iostream>
#include <string>
using namespace std;

// MyStack 탬플릿 코드(6번 문제)
template <class T>
class MyStack{
int tos; T data[100];           // tos: 스택의 탑
public:
    MyStack();      // 기본 생성자
    void push(T element);        // element를 data[] 배열에 저장(push)
    T pop();        // 가장 위에 있는 것 뺌
};

template <class T>          // 기본 생성자
MyStack<T>::MyStack() {tos = -1;}       // 스택 비어있음

template <class T>          // element를 data[] 배열에 저장(push)
void MyStack<T>::push(T element) {
    if(tos==99){            // 배열 크기가 100이므로 Stack이 가득 찼는지 확인
        cout << "stack Full"; return;
    }
    tos++;      // Stack의 Top 위치를 한 칸 증가
    data[tos] = element;        // 증가한 위치에 데이터 저장
}

template <class T>
T MyStack<T>::pop(){
    T retData;
    if(tos == -1){          // 스택 비어있을 떄
        cout << "stack Empty"; return 0;       // 오류 표시
    }
    retData = data[tos--];          // 현재 Top의 데이터를 가져온 후 tos 감소
    return retData;         // 꺼낸 데이터 반환
}

class Point{
int x,y;
public:
    Point(int x=0, int y=0){this->x=x; this->y=y;}
    void show() {cout << "(" << x << "," << y << ")" << endl;}
};

int main() {
    MyStack<int*> ipStack;      //int* 저장 스택
    int *p = new int [3];
    for(int i=0;i<3;i++){
        p[i] = i*10;                // 0,10,20
    }

    ipStack.push(p);        // 포인터 푸쉬
    int *q = ipStack.pop();     // 포인터 팝
    
    for(int i=0;i<3;i++)  cout << q[i] << ' ';          // 화면 출력
    cout << endl;
    
    delete [] p;


    MyStack<Point> pointStack;
    Point a(2,3), b;
    pointStack.push(a);         // 객체 a를 복사해서 저장
    b = pointStack.pop();       // point 객체 팝
    b.show();       // 포인터 객체 출력

    
    MyStack<Point*> pStack;         // Point* 객체 생성
    pStack.push(new Point (20,30));
    Point* pPoint = pStack.pop();           // Point 객체의 포인터 팝
    pPoint->show();         // 포인터 객체 출력


    MyStack<string> strStack;
    string s = "c++"; 
    strStack.push(s);               // push하기1
    strStack.push("java");          // push하기2
    cout << strStack.pop() << ' ';         // java 나옴 (마지막에 나온 것 먼저 튀어나옴)
    cout << strStack.pop() << endl;
}