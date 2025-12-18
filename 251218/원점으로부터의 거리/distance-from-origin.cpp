#include <iostream>
#include <algorithm>
using namespace std;

#define MAXN 1000

class Dot{
    public:
        int x, y, distant, number;
        Dot(int x, int y, int distant, int number){
            this -> x = x;
            this -> y = y;
            this -> distant = distant;
            this -> number = number;
        }
        Dot(){}
};

int Distant(int x, int y){
    if(x < 0){
        x *= -1;
    }
    if(y < 0){
        y *= -1;
    }
    return x + y;
}

bool cmp(const Dot &a, const Dot &b){
    if(a.distant == b.distant){
        return a.number < b.number;
    }
    return a.distant < b.distant;
}

Dot dot[MAXN];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x, y, distant;
        cin >> x >> y;
        distant = Distant(x, y);
        dot[i] = Dot(x, y, distant, i+1);
    }

    sort(dot, dot + n, cmp);

    for(int i = 0; i < n; i++){
        cout << dot[i].number << endl;
    }
    return 0;
}