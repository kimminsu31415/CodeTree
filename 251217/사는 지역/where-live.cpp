#include <iostream>
using namespace std;

#define MAXN 10

class Info{
    public:
        string name, phone, location;
        Info(string name, string phone, string location){
            this -> name = name;
            this -> phone = phone;
            this -> location = location;
        }
        Info(){}
};

Info info[MAXN];

int main() {
    int n;
    cin >> n;

    // 객체 입력
    for(int i = 0; i < n; ++i){
        string name, phone, location;
        cin >> name >> phone >> location;

        info[i] = Info(name, phone, location);
    }

    // 정렬 for 중요
    int last_idx = 0;
    for(int i = 1; i < n; i++){
        if(info[i].name > info[last_idx].name){
            last_idx = i;
        }
    }

    cout << "name " << info[last_idx].name << endl;
    cout << "addr " << info[last_idx].phone << endl;
    cout << "city " << info[last_idx].location << endl;
    
    return 0;
}