#include <iostream>
using namespace std;

void AbsoluteValue(int *x, int N){
    for(int i = 0; i < N; i++){
        if(x[i] < 0){
            x[i] *= (-1);
        }
        cout << x[i] << " ";
    }
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    AbsoluteValue(arr, N);
    return 0;
}