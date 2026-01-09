#include <iostream>
#include <vector>
using namespace std;

int n, m;
int dr[4] = {1, 0, -1, 0};
int dc[4] = {0, 1, 0, -1};
int r = 0, c = 0; // 현재 위치
int curr_dir = 0; // 현재 방향

// 범위 확인 함수
bool InRange(int r, int c){
    return(0 <= r && r < n && 0 <= c && c < m);
}

int main(){
    // 입력
    cin >> n >> m;
    vector<vector<int> > arr(n, vector<int> (m, 0));
    arr[r][c] = 1;

    for(int i = 2; i <= n*m; i++){
        int nr = r + dr[curr_dir];
        int nc = c + dc[curr_dir];

        // 만약 범위를 벗어나거나 이미 값이 들어있다면 방향 전환 
        if(!InRange(nr, nc) || arr[nr][nc] != 0){
            curr_dir = (curr_dir + 1) % 4;
        }

        // 이동 후 값 넣기
        r = r + dr[curr_dir];
        c = c + dc[curr_dir];
        arr[r][c] = i;
    }

    // 출력
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}