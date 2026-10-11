#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id; 
    string name; 
    int score;
};

int main() {
    Student students[3] = {
        {2021001, "김철수", 95},
        {2021002, "박영희", 88},
        {2021003, "이지민", 76}
    };

    for(int i=0;i<3;i++){
        cout << "--- 학생 정보 ---" << endl;
        cout << "학반: " << students[i].id << endl;
        cout << "이름: " << students[i].name << endl;
        cout << "점수: " << students[i].score << endl;
    }
}