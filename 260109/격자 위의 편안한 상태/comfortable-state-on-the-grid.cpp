#include <iostream>
#include <vector>
using namespace std;

// 변수 설정
int n, m;
vector<vector<int> > arr;

bool InRange(int r, int c){
    return (0 <= r && r < n && 0 <= c && c < n);
}

// 함수 알고리즘 수정 중요❗
int ComState(int r, int c){
    int color_cnt = 0;

    int dr[4] = {0, 1, 0, -1};
    int dc[4] = {1, 0, -1, 0};

    for(int i = 0; i < 4; i++){
        int nr = r + dr[i];
        int nc = c + dc[i];

        // 범위 안이고 색칠되어 있다면
        if(InRange(nr, nc) && arr[nr][nc] == 1){
            color_cnt++;
        }
    }
    return color_cnt;

    // 예정 코드
    // //위
    // if(InRange(r-1, c) && arr[r-1][c] == 1) color_cnt++;
    // // 아래
    // if(InRange(r+1, c) && arr[r+1][c] == 1) color_cnt++;
    // // 왼쪽
    // if(InRange(r, c-1) && arr[r][c-1] == 1) color_cnt++;
    // // 오른쪽
    // if(InRange(r, c+1) && arr[r][c+1] == 1) color_cnt++;
}

int main(){
    // n, m 입력
    cin >> n >> m;
    arr.assign(n, vector<int>(n, 0)); // n 입력 받은 후 크기 재설정 중요❗
    
    // 배열 입력 -> 범위를 벗어나는지, 편안한 상태인지 확인
    for(int i = 0; i < m; i++){
        int r, c;
        cin >> r >> c;

        // 주어지는 행렬 값이 1부터 시작하는지 확인 ❗
        r--;
        c--;

        // 범위를 벗어나면 오류
        if(!InRange(r, c)){
            return 0;
        }
        // 색칠하기
        arr[r][c] = 1;

        // 편안한 상태면 1 출력
        if(ComState(r, c) == 3) cout << 1 << endl;
        else cout << 0 << endl;
    }

    return 0;
}