#include <iostream>
using namespace std;

int addarray(int a[], int size);

int main() {
    int n[] = {1,2,3,4,5};

    int sum = addarray(n,5);
    cout << "배열의 합은 " << sum << "입니다." << endl;

}

int addarray(int a[], int size){
    int sum = 0;
    for(int i=0;i<size;i++) sum += a[i];
    return sum;
}