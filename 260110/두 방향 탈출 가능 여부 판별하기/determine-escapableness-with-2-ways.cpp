#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<vector<int> > snake, visited, answer;

bool InRange(int x, int y){
    return (0<=x && x < n && 0<=y && y<m);
}

bool CanGo(int x, int y){
    // 다음 위치가 격자 범위에 없다면 이동 불가
    if(!InRange(x, y)) return false;

    // 다음 위치에 뱀이 있다면 이동 불가
    if(snake[x][y] == 0) return false;

    // 다음 위치를 방문한 적 있다면 이동 불가
    if(visited[x][y] == 1) return false;

    return true;
}

void DFS(int x, int y){
    int dx[2] = {0, 1};
    int dy[2] = {1, 0};

    for(int i = 0; i < 2; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        // 다음 위치로 이동할 수 있으면
        if(CanGo(nx, ny)){
            visited[nx][ny] = 1;
            DFS(nx, ny);
        }
    }
}

int main(){
    cin >> n >> m;

    snake.assign(n, vector<int>(m, 0));
    visited.assign(n, vector<int>(m, 0));
    answer.assign(n, vector<int>(m, 0));

    // 뱀 격자 생성
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int snake_num;
            cin >> snake_num;
            snake[i][j] = snake_num;
        }
    }

    visited[0][0] = 1;
    DFS(0, 0);

    // DFS 수행 결과 우측 visited[n][m] == 1이면 1 출력
    if(visited[n-1][m-1] == 1) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}