#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(){radius=1;} ~Circle(){}
    void setRadius(int radius){this->radius=radius;}
    double getArea(){return 3.14*radius*radius;}
};
int main() {
    int n;
    cout << "생성하고자 하는 원의 개수?"; cin >> n;

    Circle *pArray = new Circle[n];
    int radius;
    for(int i=0;i<n;i++){
        cout << "원" << i+1 << ": "; cin >> radius;     // 정수 입력
        pArray[i].setRadius(radius);            // 입력받은 값을 객체의 멤버 변수에 저장 
    }

    Circle *p = pArray;
    int sum = 0;
    for(int i=0;i<n;i++){
        cout << p->getArea() << ' ';
        if(p->getArea() >=100 && p->getArea() <= 200) sum +=1; 
        p++;                
    } cout << endl;
    cout << "면적이 100에서 200 사이인 원의 개수는 " << sum << endl;

    delete [] pArray;
}