#include <iostream>
#include <algorithm>
using namespace std;

#define MAXN 10

class Body{
    public:
        string name;
        int height, weight;
        Body(string name, int height, int weight){
            this -> name = name;
            this -> height = height;
            this -> weight = weight;
        }
        Body(){}
};

bool cmp(const Body &a, const Body &b){
    return a.height < b.height;
}

Body body[MAXN];

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        body[i] = Body(name, height, weight);
    }

    sort(body, body + n, cmp);

    for(int i = 0; i < n; i++){
        cout << body[i].name << " " << body[i].height << " " << body[i].weight << endl;
    }
    return 0;
}