#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int num;
    cin >> num;

    while(num != 25){
        if(num < 25){
            cout << "Higher" << endl;
        }
        else if(num > 25){
            cout << "Lower" << endl;
        }
        
        cin >> num;
    }
    cout << "Good";
    return 0;
} 