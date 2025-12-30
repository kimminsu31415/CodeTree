#include <iostream>
#include <unordered_map>
using namespace std;

// 변수 설정
int n, m;
unordered_map<int, int> arr_to_index;

int main() {
    // 입력
    cin >> n >> m;

    // 배열 설정
    int arr[n];

    // 배열 입력 & 해시맵 입력
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        arr_to_index[i] = arr[i];
    }

    for(int j = 0; j < m; j++){
        // 찾을 값 입력
        int value, value_total;
        cin >> value;

        // 해시값 찾기
        for(int k = 0; k < n; k++){
            if(arr_to_index[k] == value){
                value_total += 1;
            }
        }

        // 출력 & 초기화
        cout << value_total << " ";
        value_total = 0;
    }

    return 0;
}