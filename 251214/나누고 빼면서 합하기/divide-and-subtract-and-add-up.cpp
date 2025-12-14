#include <iostream>
using namespace std;
int n, m, sum;

void Check(int *arr){
    sum = arr[m-1];

    for(int j = m-1; j >= 0; j--){
        if(m % 2 == 0){
            m /= 2;
        } else {
            m -= 1;
        }
        sum += arr[m-1];
    }
}

int main() {
    cin >> n >> m;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    Check(arr);
    cout << sum;
    return 0;
}