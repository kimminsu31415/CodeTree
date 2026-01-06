#include <iostream>
#include <vector>
using namespace std;

#define DIR_NUM 4
int N;

// 범위 확인
bool InRange(int x, int y){
    return (0 <= x && x < N) && (0 <= y && y < N);
}

// 이동 방향 확인
int GetDir(char D){
    if(D == 'R') return 0;
    if (D == 'D') return 1;
    if (D == 'U') return 2;
    if (D == 'L') return 3;
    return -1;
}

int main() {
    // 변수 설정
    int T, R, C;
    char D;

    // 입력
    cin >> N >> T;
    cin >> R >> C >> D;

    // 0 인덱스로 변경
    R--; C--;

    // 방향 설정
    int dx[DIR_NUM] = {0, 1, -1, 0}; // 행 변화량
    int dy[DIR_NUM] = {1, 0, 0, -1}; // 열 변화량
    int move_dir = GetDir(D); // 현재 이동 방향

    // T초 이동
    for(int i = 0; i < T; i++){
        int nx = R + dx[move_dir];
        int ny = C + dy[move_dir];
        if(InRange(nx, ny)){
            // 범위 안이면 이동
            R = nx;
            C = ny;
        } else {
            // 범위 밖이면 반대로 전환
            move_dir = 3 - move_dir;
        }
    }

    cout << R + 1 << " " << C + 1;

    return 0;
}