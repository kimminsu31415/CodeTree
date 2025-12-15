#include <iostream>
using namespace std;

void PrintStar(int N){
    if(N == 0){
        return;
    }

    for(int i = 0; i < N; i++) {
        cout << "* "; 
    }
    cout << endl;

    PrintStar(N-1);
    
    for(int i = 0; i < N; i++) {
        cout << "* ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;

    PrintStar(N);
    return 0;
}