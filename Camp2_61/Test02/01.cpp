#include<bits/stdc++.h>
using namespace std;
vector<int> g[5000];
int dis[5000];
int maxx;
vector<int> savemax;
int BFS(int node){
    int visit[5000] = {0};
    queue<int> q;
    q.push(node);
    //visit[node] = 1;
    while(!q.empty()){
        int gogo = q.front();
        q.pop();
        if(visit[gogo]==1){
            continue;
        }
        else{
            visit[gogo] = 1;
            if(node!=gogo)
                dis[node]++;
            for(int i=0;i<g[gogo].size();i++){
                if(visit[g[gogo][i] ]==0){
                    q.push(g[gogo][i]);
                }
            }
        }
    }
    //cout << node << "...." << dis[node] << endl;
    if(dis[node] > maxx){
        maxx = dis[node];
        savemax.clear();
        savemax.push_back(node);
    }
    else if(dis[node] == maxx){
        savemax.push_back(node);
    }
}

int main(){
    int N,E;
    scanf("%d %d",&N,&E);
    for(int i=0;i<E;i++){
        int st,en;
        scanf("%d %d",&st,&en);
        g[st].push_back(en);
    }
    for(int i=0;i<N;i++){
        BFS(i);
    }
    printf("%d\n",maxx);
    sort(savemax.begin(),savemax.end());
    for(int i=0;i<savemax.size();i++){
        printf("%d ",savemax[i]);
    }
}
/*
7 8
0 1
0 2
1 3
4 1
5 2
5 6
6 0
6 4
*/

/*
9 14
0 3
4 5
0 2
1 0
2 1
5 6
2 4
3 4
4 5
4 7
8 7
5 6
5 4
6 4
*/
