#include <iostream>
#include <vector>
using namespace std;

#define DIR_NUM 4
int n;

// 범위 체크 함수
bool InRange(int x, int y){
    return (0 <= x && x < n) && (0 <= y && y < n);
}

int main() {
    // 입력
    if(!(cin >> n)) return 0;

    // 격자 설정
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    // 방향 배열
    int dx[DIR_NUM] = {0, 1, 0, -1};
    int dy[DIR_NUM] = {1, 0, -1, 0};

    int total_cnt = 0;

    // 모든 칸 순회
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int cnt = 0; // 칸마다 인접한 1 개수 초기화

            // 상하좌우 4방향 확인
            for(int dir = 0; dir < 4; dir++){
                int nx = i + dx[dir];
                int ny = j + dy[dir];

                if(InRange(nx, ny) && a[nx][ny] == 1){
                    cnt++;
                }
            }

            if(cnt >= 3){
                total_cnt++;
            }
        }
    }

    cout << total_cnt;

    return 0;
}