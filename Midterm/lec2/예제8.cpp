#include <iostream>
using namespace std;

bool equalArray(int *p, int *q, int size){
    for(int i=0;i<size;i++){
        if(p[i] == q[i]) i++;
        else return false;
    } return true;
}
int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3, 4, 5};

    equalArray(a,b,5);
    if(equalArray(a,b,5) == true) cout << "arrays equal" << endl;
}