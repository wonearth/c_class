#include <iostream>
#include <string>
using namespace std;

// 다양한 자료형의 원소를 저장할 수 있는 generic Queue 클래스
template <class T>
class MyQueue {
    int front;          // 큐의 맨 앞 원소 바로 이전 위치
    int rear;           // 큐의 맨 뒤 원소 위치
    T Q[10];   // 최대 10개의 원소를 저장하는 배열
public:
    MyQueue() {                 // 생성자: 큐의 초기 상태 설정
        front = -1; rear = -1;
    }

    // 큐의 맨 뒤에 원소를 추가하는 함수
    void enque(T element) {
        if (full()) {               // 큐가 가득 찬 경우 오류 메시지 출력
            error("Queue is full");
            return;
        }

        // rear를 증가시킨 후 원소 저장
        rear++; Q[rear] = element;
        // 추가된 원소 출력
        cout << element << " enqued" << endl;
    }

    bool deque(T& element) {            // 큐의 맨 앞 원소를 삭제하고 반환하는 함수
        // 큐가 비어 있는 경우 오류 메시지 출력
        if (empty()) {
            error("Queue is empty");
            return false;
        }

        // front를 증가시킨 후 해당 원소 반환
        front++; element = Q[front];
        return true;
    }

    bool empty() {          // 큐가 비어 있는지 확인하는 함수
        return rear == front;
    }
    bool full() {           // 큐가 가득 찼는지 확인하는 함수
        return rear == 9;
    }
    void error(string s) {  // 오류 메시지를 출력하는 함수
        cout << s << endl;
    }
};

int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    // dequeue된 값을 저장할 변수
    int ii = 0; double d = 0; char c = ' ';
    // 정수형 Queue 생성 및 테스트
    cout << "\n<Integer Queue>" << endl;
    MyQueue<int> iQueue;

    iQueue.enque(3);
    iQueue.enque(4);

    for (int i = 0; i < 2; i++) {       // 큐에서 원소 2개 삭제
        if (iQueue.deque(ii))
            cout << ii << " dequeued" << endl;
    }

    // 실수형 Queue 생성 및 테스트
    cout << "\n<Double Queue>" << endl;
    MyQueue<double> dQueue;

    dQueue.enque(3.5);
    dQueue.enque(10.5);

    // 원소 3개 삭제 시도: 마지막에는 empty 오류 발생
    for (int i = 0; i < 3; i++) {
        if (dQueue.deque(d)) cout << d << " dequeued" << endl;
    }

    // 문자형 Queue를 동적으로 생성
    cout << "\n<Char Queue>" << endl;
    MyQueue<char>* p = new MyQueue<char>();

    // 문자 'a'를 10개 추가
    for (int i = 0; i < 10; i++)
        p->enque('a');

    p->enque('b');          // 큐가 가득 찬 상태에서 추가 시도

    // 원소 11개 삭제 시도: 마지막에는 empty 오류 발생
    for (int i = 0; i < 11; i++) {
        if (p->deque(c)) cout << c << " dequeued" << endl;
    }

    delete p;               // 동적으로 생성한 Queue 객체 해제
    return 0;
}
