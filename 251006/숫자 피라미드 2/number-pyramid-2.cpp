#include <iostream>
using namespace std;

int main() {
    // Please write your code here
    int n, num = 1;
    cin >> n;

    for(int i = n-1; i >=0 ; i--){
        for(int j = 0; j <n-i; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
    return 0;
}