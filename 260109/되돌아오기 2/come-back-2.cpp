// https://www.codetree.ai/ko/trails/complete/curated-cards/challenge-come-back-2/description

#include <iostream>
#include <string>
using namespace std;

int x = 0, y = 0; // 시작점
int cnt = 0; // 이동 횟수
int cur_dir = 0; // 방향 인덱스
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

// if문으로 방향 전환하기, 남은 부분은 그냥 리턴하기
int Rotate(int dir, char command){
    if(command == 'L') return (dir + 3) % 4;
    if(command == 'R') return (dir + 1) % 4;
    return dir;
}

int main(){
    string commands;
    cin >> commands;

    for(int i = 0; i < commands.length(); i++){
        char cmd = commands[i];
        
        // F인 경우 이동
        if(cmd == 'F'){
            x += dx[cur_dir];
            y += dy[cur_dir];
        } else {
            cur_dir = Rotate(cur_dir, cmd);
        }

        cnt++;

        if(x == 0 && y == 0){
            cout << cnt << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}