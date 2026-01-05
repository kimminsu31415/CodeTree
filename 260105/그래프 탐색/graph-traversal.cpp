#include <iostream>
#include <vector>
using namespace std;

#define MAX_NUM 1000

int n, m;
int vertex_cnt;

// index 1번부터 사용하기
vector<int> graph[MAX_NUM+1];
bool visited[MAX_NUM+1];

void DFS(int vertex){ // 1
    // vertex와 이어진 모든 정점 탐색
    for(int i = 0; i < (int) graph[vertex].size(); i++){ // 0~1
        int curr_v = graph[vertex][i]; // 2
        // 현재 탐색 중인 노드가 방문되지 않았다면
        if(!visited[curr_v]){
            visited[curr_v] = true;
            vertex_cnt++;
            DFS(curr_v);
        }
    }
}

int main() {
    // 1. 그래프 구현(인접 리스트 - 동적배열)
    cin >> n >> m;

    int v1, v2;
    for(int i = 0; i < m; i++){
        // 각 정점에 대한 양방향 간선을 저장
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    visited[1] = true;

    // 2. DFS 탐색
    DFS(1);

    cout << vertex_cnt;

    return 0;
}