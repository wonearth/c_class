#include <iostream>
using namespace std;

int addArray(int a[], int size);
void makeDouble(int a[], int size);
void printArray(int a[], int size);

int main() {
    int n[] = {1, 2, 3, 4, 5};
    int sum = addArray(n, 5);
    cout << "배열 n의 합은 " << sum << "입니다\n";

    makeDouble(n, 5);       // 여기서 n[] = {2,4,6,8,10}으로 바뀜 (실행 후에)
    printArray(n, 5);
}
int addArray(int a[], int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += a[i];
    }
    return sum;
}
void makeDouble(int a[], int size){
    for(int i=0;i<size;i++){
        a[i] = a[i]*2;
    }
}
void printArray(int a[], int size){
    for(int i=0;i<size;i++){
        cout << a[i] << ' ';
    }
    cout << endl;
}