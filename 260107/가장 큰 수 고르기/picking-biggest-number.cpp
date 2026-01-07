#include <iostream>
#include <climits>
using namespace std;
#include <vector>

#define MAN_N 10
vector<int> arr;

int main() {
    for(int i = 0; i < MAN_N; i++){
        int n;
        cin >> n;
        arr.push_back(n);
    }

    int max_val = INT_MIN;
    for(int i = 0; i < MAN_N; i++){
        if(arr[i] > max_val){
            max_val = arr[i];
        }
    }
    
    cout << max_val;
    
    return 0;
}