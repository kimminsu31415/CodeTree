#include <iostream>
using namespace std;

// 변수 설정
int n, cnt = 0;
int x = 0, y = 0; // 처음 위치
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int dir_index;

int DirFix(char next_dir){
    switch (next_dir)
    {
    case 'E':
        return 0;
    case 'W':
        return 1;
    case 'S':
        return 2;
    case 'N':
        return 3;
    default:
        return -1;
    }
}

int main(){
    // 입력
    cin >> n;

    for(int i = 0; i < n; i++){
        char dir;
        int move;
        cin >> dir >> move;

        // 이동 방향 확인
        dir_index = DirFix(dir);

        // 이동 -> 1칸씩 반복해서 이동하기 중요 !!!!
        for(int j = 0; j < move; j++){
            // x = x + dx[dir_index]*move; 곱하기 아님 !!!!
            x = x + dx[dir_index];
            y = y + dy[dir_index];

            cnt++;

            // 1칸 움직일 때마다 (0, 0) 확인
            if(x == 0 && y == 0){
                cout << cnt << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;

    return 0;
}