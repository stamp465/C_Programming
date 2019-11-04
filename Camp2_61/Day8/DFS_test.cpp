#include<bits/stdc++.h>
using namespace std;
int visited[1000];
vector<int> graph[1000];
int bfs(int node){
    visited[node] = 1;
    queue<int> go;
    go.push(node);
    while(!go.empty()){
        int a = go.front();
        cout << "\nvisit -> " << a;
        go.pop();
        for(int i=0;i<graph[a].size();i++)
        {
            if(visited[graph[a][i]]==0){
                cout << " will go -> " << graph[a][i];
                visited[graph[a][i]]=1;
                go.push(graph[a][i]);
            }
        }
    }
}
int main(){
    graph[40].push_back(20);
    graph[40].push_back(60);
    graph[20].push_back(10);
    graph[20].push_back(30);
    graph[60].push_back(70);
    graph[70].push_back(80);
    cout << "start at 40" ;
    bfs(40);
}
