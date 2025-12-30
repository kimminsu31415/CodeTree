#include <iostream>
#include <unordered_map>
using namespace std;

// 변수 설정
int n, m;
unordered_map<int, int> num_count;

int main() {
    // 입력
    cin >> n >> m;

    // 배열 입력 & 해시맵 입력
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        num_count[temp]++;
    }

    for(int j = 0; j < m; j++){
        // 찾을 값 입력
        int value;
        cin >> value;

        cout << num_count[value] << " ";
    }

    return 0;
}