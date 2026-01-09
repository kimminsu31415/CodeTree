#include <iostream>
#include <vector>
using namespace std;

int n, m;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
int x = 0, y = 0; // 시작 (0, 0)
int dir_num = 0; // 0: 오른쪽, 1: 아래쪽, 2: 왼쪽, 3: 위쪽

// 범위 확인 함수
bool InRange(int x, int y){
    return(0<=x && x<n && 0<=y && y<m);
}

int main(){
    // 입력
    cin >> n >> m;

    vector<vector<int> > arr(n, vector<int>(m, 0));
    arr[x][y] = 1; // 시작점

    // 2차원 배열 설정
    for(int i = 2; i <= n*m; i++){
        // 다음 위치 값 계산
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];

        // 예외처리 - 벽에 부딪히거나, 이미 숫자가 있는 경우 방향 전환
        if(!InRange(nx, ny) || arr[nx][ny] != 0){
            dir_num = (dir_num + 1) % 4; // 방향 바꾸고
            nx = x + dx[dir_num]; // 바뀐 방향으로 다시 계산
            ny = y + dy[dir_num];
            
        }

        // 실제 위치 (x, y)도 이동해야 위에서 초기화
        x = nx;
        y = ny;
        arr[x][y] = i;
    }

    //출력 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}