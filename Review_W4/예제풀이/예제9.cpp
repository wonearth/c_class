#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle();
    void setRadius(int radius);
    double getArea();
};
Circle::Circle(){radius=1;}
void Circle::setRadius(int radius){this->radius = radius;}
double Circle::getArea(){return 3.14*radius*radius;}

int main() {
    int n; cout << "생성하고자 하는 원의 개수? "; cin >> n;
    Circle *pArray = new Circle[n];

    int radius;
    for(int i=0;i<n;i++){
        cout << "원" << i+1 << ": "; cin >> radius;
        pArray[i].setRadius(radius); 
    }

    Circle *p = pArray;
    int count = 0;
    for(int i=0;i<n;i++){
        cout << p->getArea() << ' ';
        if(p->getArea() >= 100 && p->getArea() <= 200){
            count ++; 
        }p++;
    }
    cout << "\n면적이 100에서 200 사이인 원의 개수는 " << count << endl;

    delete [] pArray;
}