#include <iostream>
#include <vector>
using namespace std;

int n, t;
string command;
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
int curr_dir = 0;

int Rotate(char cmd, int dir){
    if(cmd == 'L') return (dir + 3) % 4;
    if(cmd == 'R') return (dir + 1) % 4;
    return dir;
}

bool InRange(int nr, int nc){
    return(0 <= nr && nr < n && 0<= nc && nc < n);
}

int main(){
    // 입력
    cin >> n >> t;
    cin >> command;
    int r = n/2;
    int c = n/2;

    vector<vector<int> > arr(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int num;
            cin >> num;
            arr[i][j] = num;
        }
    }

    int total = arr[r][c];

    for(int k = 0; k < command.length(); k++){
        char cmd = command[k]; // R

        if(cmd == 'F'){
            // 다음 이동 위치 확인
            int nr = r + dr[curr_dir];
            int nc = c + dc[curr_dir];
            // 다음 이동 위치가 범위를 벗어나지 않으면 이동하고 더하기
            if(InRange(nr, nc)){
                r = nr;
                c = nc;
                total += arr[r][c];
            }
        }
        else{
            curr_dir = Rotate(cmd, curr_dir);
        }

    }

    // 출력
    cout << total << endl;

    return 0;
}