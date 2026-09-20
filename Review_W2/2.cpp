// cin.ignore(): 2번째 실행하는 getline에서 이전에 남아있던 enter 버퍼 없애줌.
// fixed << setprecision(2)로 소수전 2개인 것 정하기 
// setprecision  ==> [precision(정밀도)을 2로 설정]
// #include <iomanip>       
// iomanip ==> I/O manipulation → 입출력 모양 조정
#include <iostream>
#include <string>
#include <iomanip>              // 소수점 정하기
using namespace std;

struct Student{
    string name;
    int korean, english, math;
    int sum;
    double avg;
};
Student s[3];                       // 3명을 저장

void score(Student s[], int i);
void sbj(Student s[]);

int main() {
    cout << "학생 이름과 각 과목점수 입력" << endl;
    for(int i=0;i<3;i++){
        cout << "이름: "; getline(cin, s[i].name); 
        cout << "국어: "; cin >> s[i].korean; 
        cout << "영어: "; cin >> s[i].english; 
        cout << "수학: "; cin >> s[i].math; cout << "\n";
        // 다음 getline() 전에 남아 있는 Enter 없애기.
        cin.ignore();
    }

    cout << "이름\t국어\t영어\t수학\t합계\t평균" << endl; 
    for(int i=0;i<3;i++){
        cout << s[i].name <<"\t"<< s[i].korean <<"\t"<< s[i].english <<"\t"<< s[i].math;
        cout << "\t";
        score(s, i);
    }
    
    sbj(s);
}

void score(Student s[], int i){
    s[i].sum = s[i].korean + s[i].english + s[i].math;
    s[i].avg = s[i].sum/3.0;
    cout << s[i].sum << "\t" << fixed << setprecision(2) << s[i].avg << endl;
}

void sbj(Student s[]){
    cout << "과목avg\t";
    double korean_sum=0, english_sum=0, math_sum=0;
    for(int i=0;i<3;i++){
        korean_sum += s[i].korean;
        english_sum += s[i].english;
        math_sum += s[i].math;
    }
    cout << fixed << setprecision(2) << korean_sum/3.0 << "\t" 
    << english_sum/3.0 << "\t" << math_sum/3.0 << endl;

    cout << "최고\t";
    int k_max = s[0].korean; int e_max = s[0].english;
    int m_max = s[0].math;
    for(int i=1;i<3;i++){
        if(k_max <= s[i].korean) k_max = s[i].korean;
        else k_max;
        if(e_max <= s[i].english) e_max = s[i].english;
        else e_max;
        if(m_max <= s[i].math) m_max = s[i].math;
        else m_max;
    } cout << k_max << "\t" << e_max << "\t" << m_max << endl;

    cout << "최저\t";
    int k_min = s[0].korean; int e_min = s[0].english;
    int m_min = s[0].math;
    for(int i=1;i<3;i++){
        if(k_min >= s[i].korean) k_min = s[i].korean;
        else k_min;
        if(e_min >= s[i].english) e_min = s[i].english;
        else e_min;
        if(m_min >= s[i].math) m_min = s[i].math;
        else m_min;
    } cout << k_min << "\t" << e_min << "\t" << m_min << endl;
}