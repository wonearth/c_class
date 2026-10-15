#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[5]; string latter=name[0];
    for(int i=0;i<5;i++){
        cout << "이름 >> "; getline(cin,name[i]);
        if(latter < name[i]) latter=name[i];
    }

    cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
    
}