#include <iostream>
#include <string>
using namespace std;

int level;
string id;

class NextLevel{
    public:
        string id;
        int level;
        NextLevel(string id = "codetree", int level = 10){
            this -> id = id;
            this -> level = level;
        }
};

int main() {
    cin >> id >> level;
    NextLevel B = NextLevel();
    cout << "user " << B.id << " lv " << B.level << endl;
    NextLevel A = NextLevel(id, level);
    cout << "user " << A.id << " lv " << A.level;
    return 0;
}