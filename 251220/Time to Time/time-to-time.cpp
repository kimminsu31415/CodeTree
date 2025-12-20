#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int first_min = a*60 + b;
    int second_min = c*60 + d;
    cout << second_min - first_min;
    return 0;
}