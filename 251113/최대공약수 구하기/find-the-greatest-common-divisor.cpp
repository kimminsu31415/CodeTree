#include <iostream>

using namespace std;

int n, m;
void A(int n, int m){
    int minNum = (n < m ? n: m);
    int result = 1;

    for(int i = minNum; i >= 1; i--){
        if(n % i == 0 && m % i == 0){
            result = i;
            break;
        }
    }
    cout << result;
}

int main() {
    cin >> n >> m;
    A(n, m);

    return 0;
}