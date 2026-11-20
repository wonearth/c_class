#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1); v.push_back(2); v.push_back(3);
    
    for(int i=0; i<v.size(); i++) cout << v[i] << ' ';
    cout << endl;

    v[0] = 10; int n = v[2];    // n=3 저장
    v.at(2) = 5;    // index=2인 원소를 5로 변경

    for(int i=0;i<v.size(); i++) cout << v[i] << ' ';
    cout << endl;
}