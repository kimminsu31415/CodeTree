#include <iostream>
using namespace std;

void Check(int *big, int *small){
    *big += 25;
    *small *= 2;
}

int main() {
    int a, b, big, small;
    cin >> a >> b;
    if(a > b){
        big = a;
        small = b;
        Check(&big, &small);
        cout << big << " " << small;
    } else {
        big = b;
        small = a;
        Check(&big, &small);
        cout << small << " " << big;
    }

    
    
    return 0;
}