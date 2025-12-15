#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1000

int n;
int arr_A[MAX_N], arr_B[MAX_N];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr_A[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr_B[i];
    }

    sort(arr_A, arr_A+n);
    sort(arr_B, arr_B+n);

    for(int i = 0; i < n; i++){
        if(arr_A[i] != arr_B[i]){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

    return 0;
}