#include <iostream>
using namespace std;
#include <stack>
#include <string>

stack<int> s;
int n;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        string command;
        int x;
        cin >> command;

        if(command == "push"){
            cin >> x;
            s.push(x);
        }
        else if(command == "pop"){
            cout << s.top() << endl;
            s.pop();
        }
        else if(command == "size"){
            cout << s.size() << endl;
        }
        else if(command == "empty"){
            if(s.empty() == true){
                cout << 1 << endl;
            }
            else cout << 0 << endl;
        }
        else cout << s.top() << endl;
    }
    return 0;
}