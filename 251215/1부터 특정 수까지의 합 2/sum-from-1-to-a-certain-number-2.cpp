#include <iostream>
using namespace std;

int Arithmetic(int N){
    if(N == 1){
        return 1;
    }
    return Arithmetic(N-1) + N;
}

int main() {
    int N;
    cin >> N;

    cout << Arithmetic(N);
    return 0;
}