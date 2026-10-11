#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    int score;
};
void func(Student* s, int n);

int main() {
    Student students[3] = {
        {2021001, "김철수", 95},
        {2021002, "박영희", 88},
        {2021003, "이지민", 76}
    };

    func(students, 3);
}

void func(Student* s, int n){
    for(int i=0;i<n;i++){
        cout << "--- 학생 정보 ---" << endl;
        cout << "학번: " << (s+i)->id << endl;
        cout << "이름: " << (s+i)->name << endl;
        cout << "점수: " << (s+i)->score << endl;
    }
}