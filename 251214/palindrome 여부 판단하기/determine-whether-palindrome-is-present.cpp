#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void Check(string &A){
    string temp = A;
    reverse(temp.begin(), temp.end());

    if(A == temp){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}

int main() {
    string A;
    cin >> A;
    Check(A);
    return 0;
}