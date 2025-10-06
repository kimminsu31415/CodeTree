#include <iostream>

using namespace std;

int st, ed, sum = 0, total = 0;

int main() {
    cin >> st >> ed;

    // Please write your code here.

    for(int i = st; i <= ed; i++){
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                sum += 1;
            }
        }
        if(sum == 3){
            total += 1;
        }
        sum = 0;
    }
    cout << total;

    return 0;
}
