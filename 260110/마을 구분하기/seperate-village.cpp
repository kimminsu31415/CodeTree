#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int cnt = 0 ; // 현재 탐색 중인 마을 사람 수
vector<vector<int> > grid, visited;
vector<int> people;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

bool InRange(int x, int y){
    return (0 <= x && x < n && 0 <= y && y < n);
}

bool CanGo(int x, int y){
    if(!InRange(x, y) || grid[x][y] == 0 || visited[x][y] == 1) return false;
    return true;
}

void DFS(int x, int y){
    visited[x][y] = 1;
    cnt++;

    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        // 갈 수 있다면 visited 추가
        if(CanGo(nx, ny)){
            DFS(nx, ny);
        }
    }
}

int main(){
    cin >> n;

    grid.assign(n, vector<int>(n, 0));
    visited.assign(n, vector<int>(n, 0));

    // 전체 마을 지도 생성
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int num;
            cin >> num;
            grid[i][j] = num;
        }
    }

    // 지도 탐색하며 사람 찾기
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 1 && visited[i][j] == 0){
                cnt = 0;
                DFS(i, j);
                // 탐색 끝나고 최종 사람 수 넣기
                people.push_back(cnt);
            }
        }
    }

    cout << people.size() << endl;

    sort(people.begin(), people.end());

    for(int i = 0; i < people.size(); i++){
        cout << people[i] << endl;
    }

    return 0;
}