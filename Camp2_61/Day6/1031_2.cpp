#include<bits/stdc++.h>
using namespace std;
bool visited[10005] = {false};
int dist[10005];
vector<int>v[10005];
int k,n,m,x,y;
bool BFS(int node){
    queue<int>q;
    dist[node] = 0;
    q.push(node);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0;i<v[u].size();i++){
            int z = v[u][i];
            if(!visited[z]){
                visited[z] = true;
                q.push(z);
            }
            dist[z] = min(dist[u]+1,dist[z]);
        }
    }
}
int main(){
    memset(dist,1000001,sizeof(dist));
    //cout << dist[10];
    scanf("%d%d%d",&k,&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d%d",&x,&y);
        v[x].push_back(y);
    }
    BFS(1);
    int ans = 1;

    for(int i=1;i<=n+5;i++){
        if(dist[i] >= dist[ans] && dist[i] <=k && dist[i] > 0) ans = i;
    }
    printf("%d",ans);
}

