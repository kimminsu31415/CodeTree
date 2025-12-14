#include <iostream>

using namespace std;

int N;

int Sum(int N){
    int i = 0, sum = 0;
    while(i <= N){
        sum += i;
        i++;
    }
    return sum;
}

int main() {
    cin >> N;
    int total_sum = Sum(N);
    cout << (total_sum / 10);

    

    // Please write your code here.

    return 0;
}