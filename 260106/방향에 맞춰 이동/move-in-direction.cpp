#include <iostream>
using namespace std;

int main() {
    // 변수 설정
    int n, x = 0, y = 0;
    // 서 동 북 남
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    // 입력
    if(!(cin >> n)) return 0;

    for(int i = 0; i < n; i++){
        char go;
        int distance;
        cin >> go >> distance;

            switch(go){
        case 'W':
            x += (distance * dx[0]);
            y += (distance * dy[0]);
            break;
        case 'E':
            x += (distance * dx[1]);
            y += (distance * dy[1]);
            break;
        case 'N':
            x += (distance * dx[2]);
            y += (distance * dy[2]);
            break;
        case 'S':
            x += (distance * dx[3]);
            y += (distance * dy[3]);
            break;
    }
    }



    cout << x << " " << y;

    return 0;
}