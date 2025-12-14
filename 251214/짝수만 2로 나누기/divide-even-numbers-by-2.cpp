#include <iostream>

using namespace std;

int n;
int arr[50];

void EvenNumber(int *x, int i){
    x[i] = x[i] / 2;
    cout << x[i] << " ";
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0){
            EvenNumber(arr, i);
            continue;
        }
        cout << arr[i] << " ";
    }
    return 0;
}