#include <iostream>
using namespace std;

void PrintNum(int N){
    if(N == 0){
        return;
    }
    PrintNum(N-1);

    for(int i = 1; i <= N; i++){
        if(i == N){
            cout << i << " ";
            return;
        }
    }
}

void PrintNumBack(int N){
    for(int j = N; j > 0; j--){
        cout << j << " ";
    }
    return;
}

int main() {
    int N;
    cin >> N;

    PrintNum(N);
    cout << endl;
    PrintNumBack(N);
    return 0;
}