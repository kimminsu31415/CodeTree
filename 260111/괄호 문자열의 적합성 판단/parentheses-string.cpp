#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<char> s;

int main() {
    string cmd;
    cin >> cmd;

    for(int i = 0; i < (int) cmd.size(); i++){
        if(cmd[i] == '('){
            s.push('(');
        }
        else {
            if(s.empty()){
                cout << "No";
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty()) cout << "Yes";
    else cout << "No";
    return 0;
}