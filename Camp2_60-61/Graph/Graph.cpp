#include<bits/stdc++.h>
#define INF 1e9 + 7
using namespace std;
typedef pair<int,int>pii;
bool visit[200];
vector<int>dist(100000,INF);
vector<int>c(10000,0);
vector<pii>line;
vector<pii>G[100];  ///fisrt = node    second =  weight
int before[100000];
int minMST = 0;

void Dijkstra(int start,int want){
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    //visit[start] = true;
    dist[start] = 0;
    pq.push({0,start});
    while(!pq.empty()){
            int u = pq.top().second;
            pq.pop();
            //int w = pq.top().first;
            if(visit[u]) continue;
            visit[u] = true;
            
            if(u == want) {
                printf("shortest from %d->%d = %d",start,want,dist[u]);
                break;
            }
            for(int i=0;i<G[u].size();i++){
                int v= G[u][i].first; ///node
                int w = G[u][i].second; ///weight
                if(!visit[v] && dist[u]+w < dist[v]){
                    dist[v] = dist[u]+w;
                    pq.push({dist[v],v});
                }
            }
    }




    //return ;
}


void Prim(int node){
    priority_queue<pii,vector<pii>,greater<pii>>pq; ///first = weight second = node
    dist[node] = 0;
    pq.push({0,node});
    while(!pq.empty()){
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        if(visit[u]) continue;
        visit[u] = true;
        minMST +=dist[u];
        line.push_back({u,before[u]});
        for(int i=0;i<G[u].size();i++){
            int v = G[u][i].first; ///in vector =node
            int w = G[u][i].second; /// in vector = weight
            if(!visit[v] &&  w < dist[v]){
                    dist[v] = w;
                    pq.push({dist[v],v});
                    before[v] = u;
                    //line.push_back({u,v});
            }
        }
    }
}

void SPFA(int node){ /// shorten path faster algorithm

    queue<int>q;
    dist[node] = 0;
    q.push(node);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0;i<G[u].size();i++){
            int v  = G[u][i].first;
            int w = G[u][i].second;
            if(dist[u]+w < dist[v]){
                dist[v] = dist[u]+w;
                q.push(v);
            }
        }
    }

}
void DFS(int node){
    visit[node] = true;
    for(int i=0;i<G[node].size();i++){
         int z =  G[node][i].first;
        if(!visit[z]) {
                printf("%d--->%d\n",node,z);
                DFS(z);
        }
    }
}


void BFS(int node){
    queue<int>q;
    visit[node] = true;
    q.push(node);
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int i=0;i<G[u].size();i++){
            int z= G[u][i].first;
            if(!visit[z]) {
                visit[z] = true;
                printf("%d-->%d\n",u,z);
                q.push(z);
            }
        }
    }

}
int main(){

    int in,x,y,w;
    cin >> in;
    for(int i=0;i<in;i++){
        cin >> x >> y >> w;
        G[x].push_back({y,w});
        G[y].push_back({x,w}); //if undirect graph
    }


    //BFS(40);
    Prim(0);
    cout << minMST << endl;
    /*for(int i=1;i<line.size();i++){
        cout << line[i].first << " " << line[i].second << endl;
    }*/
   // Dijkstra(0,2);
    /*SPFA(0);
    for(int i=1;i<=7;i++){
        cout << i<< " from 0 shorten path = "<< dist[i] << endl;
    }*/
}

/*
7
0 1 4
1 2 2
2 3 8
3 0 6
0 2 4
0 4 6
3 4 9


*/


