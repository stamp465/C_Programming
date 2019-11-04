#include<bits/stdc++.h>
using namespace std;
vector< int > g[100005];
bool visited[100005];
bool cycle = false;
int ans = 0;
void dfs(int node,int p)
{
    int i;
    visited[node] = true;

    for(i=0;i<g[node].size();i++)
    {
        int u = g[node][i];
        if(!visited[u])  dfs(u,node);
        else{
            if(u!= p)     cycle = true;
        }

    }
}

int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    for(int i=0;i<M;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i=1;i<N;i++)
    {
        cycle = false;
        dfs(i,-1);
        if(!cycle)   ans++;
    }
    printf("%d",ans);

}
