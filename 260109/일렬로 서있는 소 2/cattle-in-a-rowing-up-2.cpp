#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 변수 설정
    int cnt = 0;
    int n;
    vector<int> height;

    // 입력
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        height.push_back(num);
    }

    // 완전 탐색
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                if(height[i] < height[j] && height[j] < height[k]){
                    cnt++;
                }
            }
        }
    }

    // 출력
    cout << cnt << endl;

    return 0;
}