#include<bits/stdc++.h>
using namespace std;

vector<int> graph[6];

int main(){
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(4);
    graph[2].push_back(5);
    for(int i=1;i<=5;i++){
        if(!graph[i].empty()){
            printf("node %d connect ",i);
            for(int j=0;j<graph[i].size();j++){
                printf("node %d ",graph[i][j]);
            }
            printf("\n");
        }
    }
}
