#include <iostream>
#include <string>
using namespace std;

#define DIR_NUM 4

int main() {
    // 변수 설정
    int x = 0, y = 0;
    string n;
    int dx[DIR_NUM] = {1, 0, -1, 0}; // E S W N
    int dy[DIR_NUM] = {0, -1, 0, 1};
    int dir = 3;

    // 입력
    cin >> n;

    // 회전 방향 설정
    for(int i = 0; i < n.size(); i++){
        if(n[i] == 'L'){
            dir = (dir - 1 + 4) % 4;
        } else if(n[i] == 'R'){
            dir = (dir + 1) % 4;
        } else {
            x += dx[dir];
            y += dy[dir];
        }
    }

    cout << x << " " << y;

    return 0;
}