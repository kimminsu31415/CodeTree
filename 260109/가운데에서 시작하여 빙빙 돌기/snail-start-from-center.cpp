#include <iostream>
#include <vector>
using namespace std;

int n; 
int dr[4] = {0, -1, 0, 1};
int dc[4] = {1, 0, -1, 0};
int curr_dir = 0; 

bool InRange(int r, int c){
    return (0<=r&&r<n&&0<=c&&c<n);
}

int main(){
    cin >> n;
    int r = n/2;
    int c = n/2;

    vector<vector<int> > arr(n, vector<int>(n, 0));

    int num = 1; // 
    arr[r][c] = num++;

    // dist 이동거리 (1, 2, 3... 늘어남)
    for(int dist = 1; dist <= n; dist++){

        // dist만큼 크게 두 번 이동
        for(int k = 0; k < 2; k++){
            // 한 번 이동할 때 숫자 넣기
            for(int step = 0; step < dist; step++){
                r += dr[curr_dir];
                c += dc[curr_dir];

                // 범위 밖으로 가면 종료
                if(!InRange(r, c)) continue;

                arr[r][c] = num++;
            }

            // 다 이동하면 방향 바꾸기
            curr_dir = (curr_dir + 1) % 4;
        }

        int move = 1; // 이동 거리
    }

    // 출력
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}