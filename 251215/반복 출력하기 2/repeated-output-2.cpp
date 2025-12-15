#include <iostream>
using namespace std;

void PrintHello(int N){
    if(N == 0){
        return;
    }

    PrintHello(N - 1);
    cout << "HelloWorld" << "\n";
}

int main() {
    int N;
    cin >> N;
    
    PrintHello(N);

    return 0;
}