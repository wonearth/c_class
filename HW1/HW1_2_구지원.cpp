#include <iostream>
using namespace std;

class ArrayUtil{
public:
    static int* concat(int s1[], int s2[], int size);       // 배열 주소 전달 받음 -> 새로운 배열을 동적 생성
    static int* remove(int s1[], int s2[], int size, int& reSize);     // 첫번째 배열 - 두 번째 배열 한 원소들 출력
};
int* ArrayUtil::concat(int s1[], int s2[], int size){
    int *array = new int[size*2];       // 두 배열을 합칠 공간 동적 할당
    for(int i=0;i<size;i++) array[i] = s1[i];       // 배열 A 저장
    for(int i=0;i<size;i++) array[size+i] = s2[i];          // 배열 B 저장
    return array;     // 합쳐진 배열의 주소 반환
}
int* ArrayUtil::remove(int s1[], int s2[], int size, int& reSize){
    reSize = 0;     // 처음에 초기화
    for(int i=0;i<size;i++){
        bool found = false;         // B에 동일 원소 있는지 확인
        for(int j=0;j<size;j++){     
            if(s1[i] == s2[j]) {        // 동일하다면
                found = true; break;    // 반복 종료
            }
        }
        if(!found) reSize++;            // B에 없는 원소만 개수 증가
    }

    int *result = new int[reSize];      // 남은 원소 개수만큼만 동적배열생성
    int k=0;            // result 배열(새로운 배열)의 인덱스
    for(int i=0;i<size;i++){        
        bool found = false;

        for(int j=0;j<size;j++){
            if(s1[i] == s2[j]){
                found = true; break;
            }
        }
        if(!found) {
            result[k] = s1[i]; k++;         // B에 없는 A의 원소만 저장
        }
    }
    return result;      // 새로운 배열의 주소 반환
}

int main() {
    int n; cout << "정수배열크기 : "; cin >> n;

    cout << "Input " << n << " integers for Array A" << endl;
    int *arr1 = new int[n];                  // 포인터 선언 + 크기가 n인 배열 동적 할당
    for(int i=0;i<n;i++) {
        cin >> arr1[i]; 
    }

    cout << "Input " << n << " integers for Array B" << endl;
    int *arr2 = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr2[i]; 
    }

    int *concatArr = ArrayUtil::concat(arr1, arr2, n);      // concat() 호출
    cout << "<배열 A와 B를 합친 배열>" << endl;
    for(int i=0;i<n*2;i++) cout << concatArr[i] << ' ';
    cout << endl;

    int reSize;
    int *removeArr = ArrayUtil::remove(arr1, arr2, n, reSize);  // remove() 호출
    cout << "<배열 A 원소에서 배열 B 원소를 뺀 배열(원소 : " << reSize << "개)>" << endl;
    for(int i=0;i<reSize;i++){
        cout << removeArr[i] << ' ';
    } cout << endl;

    delete [] arr1; delete [] arr2;         // 동적 배열 해제
    delete [] concatArr; delete [] removeArr;
}   