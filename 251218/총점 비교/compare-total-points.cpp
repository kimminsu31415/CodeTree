#include <iostream>
using namespace std;

#define MAXN 10

class Subject{
    public:
        string name;
        int kor, eng, math;
        Subject(string name, int kor, int eng, int math){
            this -> name = name;
            this -> kor = kor;
            this -> eng = eng;
            this -> math = math;
        }
        Subject(){}
};

bool cmp(const Subject &a, const Subject &b){
    return a.kor + a.eng + a.math < b.kor + b.eng + b.math;
}

Subject subject[MAXN];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;
        subject[i] = Subject(name, kor, eng, math);
    }

    sort(subject, subject+n, cmp);

    for(int i = 0; i < n; i++){
        cout << subject[i].name << " " << subject[i].kor << " " << subject[i].eng << " " << subject[i].math << endl; 
    }
    
    return 0;
}