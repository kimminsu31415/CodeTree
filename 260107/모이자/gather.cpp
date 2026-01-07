#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> arr;

int main() {
    // 변수 설정
    int n;
    int min_dist = INT_MAX;

    // 입력
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    // 최소 거리 탐색
    for(int i = 0; i < n; i++){
        int min_num = 0; // 선택한 집으로 가는 거리 초기화
        int dist = 0; // 거리 값
        for(int j = 0; j < n; j++){
            dist += abs(j-i)*arr[j];
        }
        // 최종 최소 거리
        min_num = dist;
        min_dist = min(min_dist, min_num);
    }

    cout << min_dist;
    return 0;
}