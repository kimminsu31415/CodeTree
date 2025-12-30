#include <iostream>
#include <unordered_map>
using namespace std;
#include <string>
#include <algorithm>

// 변수 설정
int n, winner;
unordered_map<string, int> words_count;

int main() {
    // 입력
    cin >> n;
    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        words_count[word]++;

        winner = max(winner, words_count[word]);
    }

    cout << winner;

    return 0;
}