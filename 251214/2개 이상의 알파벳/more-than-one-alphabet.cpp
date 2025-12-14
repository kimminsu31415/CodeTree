#include <iostream>
#include <string>
using namespace std;

bool Check(string A){
    char start = A[0];
    
    for(int i = 0; i < A.length(); i++){
        if(A[i] != start){
            return true;
        }
    }
    return false;
}

int main() {
    string A;
    cin >> A;

    if(Check(A)){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}