#include <iostream>
using namespace std;

int F(int N){
    if(N==1 or N==2){
        return 1;
    }

    return F(N-1) + F(N-2);
}

int main() {
    int N;
    cin >> N;

    cout << F(N);
    return 0;
}