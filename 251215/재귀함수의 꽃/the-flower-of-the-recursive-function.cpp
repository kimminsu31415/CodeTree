#include <iostream>
using namespace std;

void PrintNumBack(int N){
    
    if(N==0){
        return;
    }
    cout << N << " ";
    PrintNumBack(N-1);
}

void PrintNum(int N){
    if(N == 0){
        return;
    }
    PrintNum(N-1);
    cout << N << " ";

}

int main() {
    int N;
    cin >> N;

    PrintNumBack(N);
    PrintNum(N);
    return 0;
}