#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, k, cnt = 0;
vector <vector<int>> grid;
vector < vector<int>> visited;
queue<pair<int, int>> q;

// 예외처리 함수
bool InRange(int r, int c){
    return (0<= r && r < n && 0<= c && c<n);
}

bool CanGo(int r, int c){
    return InRange(r, c) && grid[r][c] == 0 && visited[r][c] == 0;
}

void BFS(){
    while(!q.empty()){
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, 1, -1};

        // 먼저 들어온 원소 큐에서 빼기 <- 이거 자꾸 까먹
        pair<int, int> curr_pos = q.front();
        int r = curr_pos.first;
        int c = curr_pos.second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nr = r + dr[i];
            int nc = c + dc[i];

            if(CanGo(nr, nc)){
                visited[nr][nc] = 1;
                cnt++;
                q.push(make_pair(nr, nc));
            }
        }
    }
}

int main() {
    cin >> n >> k;
    grid.assign(n, vector<int>(n, 0));
    visited.assign(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int num;
            cin >> num;
            grid[i][j] = num;
        }
    }

    for(int i = 0; i < k; i++){
        int r, c;
        cin >> r >> c;
        
        // 좌표 보정!!!
        r--;
        c--;

        // [수정 2] 이미 방문한 곳이면 패스! (중복 카운트 방지)
        if(visited[r][c]) continue;

        q.push(make_pair(r, c));
        visited[r][c] = 1;
        cnt++;

        BFS();
    }

    cout << cnt << endl;


    return 0;
}