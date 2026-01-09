#include <iostream>
#include <vector>
using namespace std;

int n, m;
int dr[4] = {0, 1, 0, -1};
int dc[4] = {1, 0, -1, 0};
int r = 0, c = 0; // 처음 위치
int curr_dir = 0; // 처음 방향

// 범위 확인
bool InRange(int r, int c){
    return (0 <= r && r < n && 0 <= c && c < m);
}

int main(){
    cin >> n >> m;
    vector<vector<char> > arr(n, vector<char>(m, 0));

    for(int i = 0; i < n*m; i++){
        char alpah = (i  % 26) + 'A' ; // 알파벳 반복 아스키 코드 ❗

        arr[r][c] = alpah; // 먼저 색칠 ❗

        // 다음 위치
        int nr = r + dr[curr_dir];
        int nc = c + dc[curr_dir];
        
        // 범위를 벗어나거나 값이 이미 있으면 방향 전환
        if(!InRange(nr, nc) || arr[nr][nc] != 0){
            curr_dir = (curr_dir + 1) % 4;
            nr = r + dr[curr_dir];
            nc = c + dc[curr_dir];
        }

        // 실제 위치 갱신❗
        r = nr;
        c = nc;
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