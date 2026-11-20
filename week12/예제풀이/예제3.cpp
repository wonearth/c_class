#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1); v.push_back(2); v.push_back(3);

    vector<int>::iterator it;

    for(it=v.begin(); it!=v.end();it++){
        int n = *it; n*=2;
        *it=n;
    }

    for(it=v.begin(); it!=v.end();it++) cout << *it << " ";
    cout << endl;

    it=v.begin();       // 0번째 원소=it
    it=v.erase(it);     // it 삭제(0번쨰 원소)

    cout << *it << endl;
    cout << "size: " << v.size() << endl;
    cout << "capacity: "  << v.capacity() << endl;

    it=v.insert(it,22);         // 0번째 원소로 22 넣음
    cout << *it << endl;        // 22출력

    for(it=v.begin(); it!=v.end();it++) cout << *it << ' ';
    cout << endl;
}