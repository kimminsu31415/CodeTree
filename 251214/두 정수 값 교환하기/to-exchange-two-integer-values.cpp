#include <iostream>

using namespace std;

int n, m;

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    cin >> n >> m;
    Swap(n, m);
    cout << n << " " << m;

    // Please write your code here.

    return 0;
}