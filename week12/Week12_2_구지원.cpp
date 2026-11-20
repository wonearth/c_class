#include <iostream>
#include <string>
#include <map>          // map header
#include <algorithm>    // 알고리즘 헤더
using namespace std;

int main() {
    cout << "==============" << endl;
    cout << "학과: 컴퓨터공학과" << endl << "학번: 2376018" << endl;
    cout << "이름: 구지원" << endl;
    cout << "==============" << endl;

    map<string, string> dic;    // 이름과 비밀번호 저장 (map 사용)
    cout << "<이름과 password 관리 프로그램>" << endl;

    while(true){
        string name, password; int num;     // 변수 선언
        cout << "1.insertion  2. search  3. delete  4. exit: "; cin >> num;  // 메뉴 입력

        if(num < 1 || num > 4) {            // 1~4 이외는 잘못된 입력
            cout << "잘못된 입력" << endl; continue;
        }

        if(num == 1) {                  // 1. insertion
            cout << "이름: "; cin.ignore(); getline(cin, name);     // 이름 입력
            cout << "password:"; getline(cin, password);        // 비번 입력

            dic[name] = password;           // map에 이름과 비번 저장
        }

        if(num == 2) {              // 2. search
            string searchName, searchPassword;
            cout << "찾을 이름:"; cin >> searchName;

            if(dic.find(searchName) == dic.end())           // 이름이 존재하는지 검색
                cout << "없음" << endl;
            else {
                bool found = false;

                for(int i=0; i<4; i++){              // password 최대 4회 입력
                    cout << "password는?"; cin >> searchPassword;

                    if(dic[searchName] == searchPassword){      // 있는지 확인 dic에
                        cout << searchName << " 찾음" << endl;
                        found = true; break;
                    }
                    else if(i < 3) cout << "password 틀림" << endl;     // 없으면 틀림 + 다시 입력(4번까지)
                }

                if(!found) cout << "4회 시도 실패" << endl;         // 시도 실패(4회 이상)
            }
        }

        if(num == 3) {                  // 3. deletion
            cout << "삭제할 이름:"; cin.ignore(); getline(cin, name);

            if(dic.find(name) == dic.end()) cout << "없음" << endl;         // 이름이 없으면 없음 출력
            else {
                dic.erase(name);    // 해당 이름 삭제
                cout << name << " 삭제" << endl;
            }
        }
        
        if(num == 4) break;             // 4. exit
    }
    cout << '\n';

    cout << "<iterator 사용>" << endl;          // iterator를 이용하여 전체 map 출력
    map<string, string>::iterator it;
    
    for(it=dic.begin(); it!=dic.end(); it++) cout << it->first << " " << it->second << endl;


    // Lambda 함수를 이용하여 전체 map 출력
    cout << "<람다함수 사용>" << endl;

    for_each(dic.begin(), dic.end(), [](const pair<const string, string>& p){
        cout << p.first << " " << p.second << endl;
    });

    return 0;
}
