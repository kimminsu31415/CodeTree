#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i = n; i > 0; i--){ // i = 5
        for(int j = i; j > 0; j--){ // j = 0
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}