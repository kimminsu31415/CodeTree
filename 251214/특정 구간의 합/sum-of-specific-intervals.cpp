#include <iostream>
#include <vector>
using namespace std;

int n, m;
int a, b;
vector<int> arr;

void Check(int a, int b){
    int sum = 0;
    for(int i = a-1; i <= b-1; i++){
        sum += arr[i];
    }
    cout << sum << "\n";
}

int main() {
    cin >> n >> m;
    arr.resize(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int j = 0; j < m; j++){
        cin >> a >> b;
        Check(a, b);
    }

    
    return 0;
}