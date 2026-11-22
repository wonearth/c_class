#include <iostream>
using namespace std;

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

int main() {
    MyStack<int> iStack;
    iStack.push(3); 
    cout << iStack.pop() << endl;           // 3 출력

    MyStack<double> dStack;
    dStack.push(3.5);
    cout << dStack.pop() << endl;           // 3.5 출력

    MyStack<char> *p = new MyStack<char>();         // char 만 저장하는 스택 생성(객체 생성)
    p->push('a');       // 포인터니까 화살표로
    cout << p->pop() << endl;
    delete p;           
}