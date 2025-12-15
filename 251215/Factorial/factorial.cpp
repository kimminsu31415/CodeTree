#include <iostream>
using namespace std;

int Fact(int N){
    if(N == 1){
        return 1;
    }

    return Fact(N-1) * N;
}

int main() {
    int N;
    cin >> N;

    cout << Fact(N);
    return 0;
}