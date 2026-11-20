#include <iostream>
#include <set>
using namespace std;

void print(int n){
    cout << n << ' ';
}

int main() {
    set<int> s = {3,1,5,8,7,5};
    for_each(s.begin(), s.end(), print);
}