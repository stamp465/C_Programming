#include<bits/stdc++.h>
using namespace std;
vector<int> g[10050];
bool visited[10050];
int arrdis[10050];
void bfs(int node,int power)
{
    queue<int>  q;
    q.push(node);
    visited[node] = 1;
	arrdis[node] = 0;
    while(!q.empty())
    {
        int u = q.front();  q.pop();
        for(int i=0;i<g[u].size();i++)
        {
        	int z = g[u][i];
            if(!visited[z])
            {
                q.push(z);
                visited[z] = 1;
                arrdis[z] = max(arrdis[u]+1,arrdis[z]);
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
	for(int i=1;i<=N;i++)
    {
        if(!visited[i]) {
			bfs(i,K);
		}
    }
    int max=0,savei=0;
    for(int i=1;i<=N;i++)
    {
        if(arrdis[i]<=K){
        	if(max<=arrdis[i])	{
        		max = arrdis[i];
        		if(i>savei)	savei = i;
        	}
		}
    }
    cout << savei << endl;
}
