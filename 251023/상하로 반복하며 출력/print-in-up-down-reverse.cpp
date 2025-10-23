#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if(!(cin >> N)) return 0;

    for (int r = 0; r < N; ++r) {
        for (int c = 0; c < N; ++c) {
            int val = (c % 2 == 0) ? (r + 1) : (N - r);
            cout << val;
            if (c + 1 < N) cout;
        }
        cout << '\n';
    }
    return 0;
}