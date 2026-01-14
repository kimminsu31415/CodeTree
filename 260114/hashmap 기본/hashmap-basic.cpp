#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> m;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string cmd;
        int k, v;
        cin >> cmd;
        if(cmd == "add"){
            cin >> k >> v;
            m[k] = v;
        }
        else if(cmd == "remove"){
            cin >> k;
            m.erase(k);
        }
        else if(cmd == "find"){
            cin >> k;
            if(m.find(k) != m.end()){
                cout << m[k] << endl;
            }
            else cout << "None" << endl;
        }
    }
    return 0;
}