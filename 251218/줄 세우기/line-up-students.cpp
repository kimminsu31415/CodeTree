#include <iostream>
#include <algorithm>
using namespace std;

#define MAXN 1000

class Body{
    public:
        int height, weight, number;
        Body(int height, int weight, int number){
            this -> height = height;
            this -> weight = weight;
            this -> number = number;
        }
        Body(){}
};

bool cmp(const Body &a, const Body &b){
    if(a.height == b.height){
        if(a.weight == b.weight){
            return a.number < b.number;
        }
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

Body body[MAXN];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int height, weight;
        cin >> height >> weight;
        body[i] = Body(height, weight, i+1);
    }

    sort(body, body + n, cmp);

    for(int i = 0; i < n; i++){
        cout << body[i].height << " " << body[i].weight << " " << body[i].number <<endl;
    }
    return 0;
}