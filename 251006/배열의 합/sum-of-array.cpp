#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[4][4], sum = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

  for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            sum += arr[i][j];
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}