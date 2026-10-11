#include <iostream>
#include <string>
using namespace std;

struct Student{
    int id; string name; float grade;
};


int main() {
    Student s1 = {1001, "Jane", 89.5};

    cout << "Student ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Grade: " << s1.grade << endl;
}