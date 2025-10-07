#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    if(a >= b && a >= c){
        cout << a;
    }else if(b >= c && b >= a){
        cout << b;
    }else if(c >= a && c >= b){
        cout << c;
    }
    return 0;
}