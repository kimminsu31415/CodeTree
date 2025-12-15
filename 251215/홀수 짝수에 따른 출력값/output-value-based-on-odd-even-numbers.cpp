#include <iostream>
using namespace std;

int Even(int N){
    if(N < 1)
        return 0;
    return Even(N-2) + N;
}

int Odd(int N){
    if(N < 1)
        return 0;
    return Odd(N-2) + N;
}

int main() {
    int N;
    cin >> N;
    if(N%2==0)
        cout << Even(N);
    if(N%2==1)
        cout << Odd(N);
    return 0;
}