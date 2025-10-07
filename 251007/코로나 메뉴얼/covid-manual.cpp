#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char kam[3];
    int body[3];
    int A = 0;

    for(int i = 0; i < 3; i++){
        cin >> kam[i] >> body[i];
        if(kam[i] == 'Y' && body[i] >=37){
            A += 1;
        }
    }

    if(A >= 2){
        cout << 'E';
    }else{
        cout << 'N';
    }
    return 0;
}