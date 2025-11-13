#include <iostream>
using namespace std;
void Square(int n){
    // for문
    int sum = 1;
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cout << sum << " ";
            sum++;
            if(sum > 9){
                sum = 1;
            }
        }
        cout << endl;
    }
}

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    Square(n);
    return 0;
}