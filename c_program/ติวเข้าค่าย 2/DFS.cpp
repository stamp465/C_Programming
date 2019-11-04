#include<bits/stdc++.h>
using namespace std;

bool visited[100];
int a[100][100];

void dfs(int node)
{
    int i;
    visited[node] = 1;
    //áººãªélist
/*    for(i=0;i<a[node].size();i++)
    {
        int u = a[node][i];
        if(visited[u])  dfs(i);
    }*/
    for(i=0;i<99;i++)
    {
        if(a[node][i]==1&&!visited[i])  dfs(i);

    }
}

void bfs(int node)
{
    queue<int>  q;
    q.push(node);
    visited[node] = 1;

    while(!q.empty())
    {
        int u = q.front();  q.pop();
        for(int i=0;i<99;i++)
        {
            if(a[u][i]==1 && !visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main()
{
    //DFS
    for(int i=0;i<100;i++)
    {
        if(!visited[i]) dfs(i);
    }

    for(int i=0;i<100;i++)
    {
        if(!visited[i]) bfs(i);
    }

}
