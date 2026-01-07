#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    cin >> A;

    int cnt = 0;
    for(int i = 0; i < A.length(); i++){
        if(A[i] != '('){
            continue;
        }
        else {
            for(int j = i+1; j < A.length(); j++){
                if(A[j] == ')'){
                    cnt += 1;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}