#include <iostream>
using namespace std;

void PrintNum(int N){
    if(N == 0){
        return;
    }
    PrintNum(N-1);
    cout << N << " ";

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