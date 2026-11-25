#include <iostream>
using namespace std;

class IntArray{
int size; int* data;
public:
    IntArray(int size){ this->size=size; data = new int[size](); }
    ~IntArray(){ delete [] data; }
    void set(int index, int value);
    void show();
    // 복사생성자
    IntArray(const IntArray& obj);
    // 복사대입 연산자
    IntArray& operator=(const IntArray& obj);
};
void IntArray::set(int index, int value){
    data[index] = value;
}
void IntArray::show(){
    for (int i = 0; i < size; i++)
        cout << data[i] << ' ';
    cout << endl;
}

IntArray::IntArray(const IntArray& obj){
    size = obj.size;             // 배열 크기 복사
    data = new int[size];        // 새로운 동적 배열 할당

    for(int i=0; i<size; i++)
        data[i] = obj.data[i];   // 배열 원소 하나씩 복사
}
IntArray& IntArray::operator=(const IntArray& obj){
    if(this == &obj)
        return *this;           // 자기 자신에 대한 대입 방지
    delete[] data;              // 기존 동적 배열 해제

    size = obj.size;            // 배열 크기 복사
    data = new int[size];       // 새로운 동적 배열 할당

    for(int i=0; i<size; i++)
        data[i] = obj.data[i];  // 배열 원소 하나씩 복사
    return *this;               // 대입된 자기 자신 반환
}

int main() {
    cout << "[초기 상태]" << endl;
    
    IntArray a(3); 
    a.set(0, 10); a.set(1,20); a.set(2,30);
    cout << "a: "; a.show();

    IntArray b(a); 
    cout << "b: "; b.show();

    IntArray c(2);
    c.set(0,100); c.set(1,200);
    cout << "c: "; c.show();

    cout << '\n' << "[복사대입 및 a 변경 후]" << endl;
    c = a; a.set(0,99);
    cout << "a: "; a.show(); 
    cout << "b: "; b.show(); 
    cout << "c: "; c.show();

    cout << '\n' << "[자기 자신에 대한 대입 후]" << endl;
    c = c; 
    cout << "c: "; c.show();
}