#include <iostream>
using namespace std;

#define DIR_NUM 4

int main() {
    // 변수 설정
    int n, x = 0, y = 0;
    // 서 동 북 남
    int dx[DIR_NUM] = {-1, 1, 0, 0};
    int dy[DIR_NUM] = {0, 0, 1, -1};

    // 입력
    if(!(cin >> n)) return 0;

    for(int i = 0; i < n; i++){
        char go;
        int dist;
        cin >> go >> dist;

        int dir;
        if(go == 'W'){dir = 0;}
        else if(go == 'E'){dir = 1;}
        else if(go == 'N'){dir = 2;}
        else if(go == 'S'){dir = 3;}

        x += dx[dir] * dist;
        y += dy[dir] * dist;
    }



    cout << x << " " << y;

    return 0;
}