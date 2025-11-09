#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    int a, b;
    cin >> a >> b;
    double c = double (a+b) / (a-b);
    cout.precision(2);
    cout << c;
    return 0;
}
