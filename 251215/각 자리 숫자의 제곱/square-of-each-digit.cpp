#include <iostream>
using namespace std;

int Func(int N){
    if(N < 10){
        return N * N; // 그 숫자도 제곱해서 반환해야
    }

    int digit = N % 10; // 일의 자리 수 구하기

    //Func(1*1) + Func(65432)
    return (digit * digit) + Func(N / 10);
}

int main() {
    int N;
    cin >> N;

    // Func(654321)
    cout << Func(N);
    return 0;
}