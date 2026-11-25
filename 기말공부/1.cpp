#include <iostream>
#include <string>
#include <iomanip>          // 소수점 아래 2자리까지 출력을 위해
using namespace std;

class Student{
string name; int size; 
int *score;
public:
    Student(string name, int size){
        this->name=name; this->size=size;
        score = new int[size];              // 동적할당 함
    }
    ~Student() { delete[] score; }          // 동적할당 해제
    void input();
    int getTotal(); double getAverage();
    void show();
};
void Student::input(){
    for(int i=0;i<size;i++){
        cout << "과목 " << i+1 << " 점수: "; cin >> score[i];
    }
    cout << endl;
}

int Student::getTotal(){
    int sum=0;
    for(int i=0;i<size;i++){
        sum +=score[i];
    }
    return sum;
}
double Student::getAverage(){
    double avg = (double)getTotal()/size;
    return avg;
}

void Student::show(){
    cout << "학생 이름: " << name << endl;
    cout << "총점: " << getTotal() << endl;
    // 소수점 아래 2자리까지 출력
    cout << "평균: " << fixed << setprecision(2) << getAverage() << endl;
}

int main() {
    string name; int size;
    cout << "학생 이름: "; cin >> name;
    cout << "과목 수: "; cin >> size;

    Student s(name, size);
    s.input(); 
    s.show();
}