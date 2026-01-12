#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<vector<int>> grid;
vector<vector<int> > visited;
queue<pair<int, int>> q;

// 예외처리 함수
bool InRange(int r, int c){
    return (0<= r && r < n && 0<= c && c<m);
}

bool CanGo(int r, int c){
    return InRange(r, c) && grid[r][c] == 1 && visited[r][c] == 0;
}

// 탐색 함수
void BFS(){
    while(!q.empty()){
        // 먼저 들어온 원소 큐에서 빼기
        pair<int, int> curr_pos = q.front();
        int r = curr_pos.first;
        int c = curr_pos.second;
        q.pop();

        int dr[4] = {1, -1, 0, 0};
        int dc[4] = {0, 0, -1, 1};

        // 우선순위 방향 확인
        for(int i = 0; i < 4; i++){
            int nr = r + dr[i];
            int nc = c + dc[i];
            if(CanGo(nr, nc)){
                visited[nr][nc] = 1;
                q.push(make_pair(nr, nc));
                
            }
        }
    }
}

int main() {
    // 입력
    cin >> n >> m;

    // grid 지도 생성
    grid.assign(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int snake;
            cin >> snake;
            grid[i][j] = snake;
        }
    }

    //visited 행렬 생성
    visited.assign(n, vector<int>(m, 0));

    // 함수 호출: BFS + queue
    q.push(make_pair(0, 0));
    visited[0][0] = 1;
    BFS();

    // 출력
    if(visited[n-1][m-1] == 1) cout << 1;
    else cout << 0;
    return 0;
}