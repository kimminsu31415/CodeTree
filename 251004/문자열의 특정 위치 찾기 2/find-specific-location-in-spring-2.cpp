#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char eng;
    int sum = 0;
    cin >> eng;
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    for(int i = 0; i < 5; i++){
        string word = arr[i];
        if(word[3] == eng || word[4] == eng){
            cout << word;
            sum += 1;
        }
        continue;
    }
    cout << sum;
    return 0;
}