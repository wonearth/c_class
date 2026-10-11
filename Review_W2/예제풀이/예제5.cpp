#include <iostream>
using namespace std;

inline int odd(int x){
    return (x%2);   // 짝수면 0반환, 아니면 1 반환
}

int main(){
    int sum = 0;
    for(int i=1;i<=10000;i++){
        if(odd(i) == 1) sum += i;   // odd(i)만 써도 맞음
    }
    cout << sum << endl;
}