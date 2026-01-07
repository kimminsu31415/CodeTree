#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// 배열 설정
vector<int> arr;

int main() {
    //입력
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    // 최솟값 찾기
    int min_num = INT_MAX;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        // 최솟값이 바뀌었을 때 min_num과 최솟값 개수 초기화
        if(arr[i] < min_num){
            min_num = arr[i];
            cnt = 0;
        }
        if(arr[i] == min_num){
            cnt += 1;
        }
    }

    cout << min_num << " " << cnt;
    return 0;
}