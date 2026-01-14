#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

unordered_map<string, int> hashMap;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> arr(n+1);

    for(int i = 1; i<= n; i++){
        cin >> arr[i];
        hashMap[arr[i]] = i;
    }

    for(int j = 0; j < m; j++){
        string key;
        cin >> key;
        if(isdigit(key[0])){ // 숫자면
            cout << arr[stoi(key)] << '\n';
        }
        else cout << hashMap[key] << '\n';
    }
    return 0;
}