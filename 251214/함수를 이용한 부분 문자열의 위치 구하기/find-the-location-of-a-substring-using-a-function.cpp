#include <iostream>
using namespace std;
string input_str, goal_str;

void Check(){
    int n = input_str.length();
    int m = goal_str.length();

    for(int i = 0; i <= n-m ; i++){
        bool is_match = true;

        for(int j = 0; j < m; j++){
            if(input_str[i+j] != goal_str[j]){
                is_match = false;
                break;
            }
        }

        if(is_match == true){
            cout << i;
            return;
        }
    }
    cout << -1;
}

int main() {
    
    cin >> input_str;
    cin >> goal_str;
    Check();

    return 0;
}