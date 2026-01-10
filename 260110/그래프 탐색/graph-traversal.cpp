#include <iostream>
#include <vector>
using namespace std;

#define MAX_NUM 1000
vector<int> graph[MAX_NUM + 1];
bool visited[MAX_NUM + 1];
int vertex_cnt;

void DFS(int vertex){
    for(int i = 0; i < graph[vertex].size(); i++){
        int curr_v = graph[vertex][i];
        if(!visited[curr_v]){
            visited[curr_v] = true;
            vertex_cnt++;
            DFS(curr_v);
        }
    }
}

int main(){
    int vertex, edge;
    cin >> vertex >> edge;

    
    // 인접 리스트 만들기
    for(int i = 0; i < edge; i++){
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1); 
    }

    visited[1] = true;
    DFS(1);

    cout << vertex_cnt << endl;
    return 0;
}