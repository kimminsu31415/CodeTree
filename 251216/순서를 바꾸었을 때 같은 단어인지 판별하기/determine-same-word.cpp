#include <iostream>
using namespace std;
#include <algorithm>
#include <string>

string a, b;

bool Equal(){
    if(a.length() != b.length()){
        return false;
    }
    for(int i = 0; i < a.length(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    cin >> a;
    cin >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(Equal() == true){
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}