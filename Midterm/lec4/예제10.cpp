#include <iostream>
#include <string>
using namespace std;

int main() {
    string str; string address="서울시 서대문구";
    string copyAddress(address);
    char text[] = {'L','o','v','e',' ','C','+','+','\0'};
    string title(text);

    cout << str << endl << address << endl << copyAddress << endl << text << endl;
}