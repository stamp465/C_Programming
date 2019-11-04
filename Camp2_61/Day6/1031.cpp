#include<bits/stdc++.h>
using namespace std;
vector<int> g[100050];
int visit[100050]={0};
int dis[100050]={0};
int maxx=0,savei=0;
int bfs(int node,int power)
{
    visit[node]=1;
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0;i<g[u].size();i++)
        {
            if(visit[g[u][i]]==0)
            {
                visit[g[u][i]]=1;
                q.push(g[u][i]);
                dis[g[u][i]] = max(dis[g[u][i]],dis[u]+1);
                if(dis[g[u][i]]>=maxx&&dis[g[u][i]]<=power)
                {
                    if(g[u][i]>=savei){
                        savei = g[u][i];
                        maxx = dis[g[u][i]];
                    }
                }
            }
        }
    }
}

int main()
{
    int K,N,M;
    cin >> K >> N >> M;
    for(int i=0;i<M;i++)
    {
        int st,go;
        cin >> st >> go;
        g[st].push_back(go);
    }
    bfs(1,K);
    cout << savei;
}
