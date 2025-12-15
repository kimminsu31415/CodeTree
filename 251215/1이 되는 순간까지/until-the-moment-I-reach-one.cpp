#include <iostream>
using namespace std;

int sum;
// Func(230)
void Func(int N){
    
    if(N == 1){
        return;
    }

    if(N % 2 == 0){
        sum += 1;
        Func(N/2);
    } else if (N % 2 == 1){
        sum += 1;
        Func(N/3);
    } 
}

int main() {
    int N;
    cin >> N;
    Func(N);

    cout << sum;
    return 0;
}