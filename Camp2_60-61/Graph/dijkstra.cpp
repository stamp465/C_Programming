#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
vector<pii>G[100];
vector<int> dist(1000,INT_MAX);
int visit[1000];
vector<int> before(1000,-1);
vector<int> v;
int dj(int s,int f)
{
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    pq.push({0,s});
    dist[s] = 0;
    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if(visit[u])
            continue;
        visit[u] = true;
        if(u == f)
        {
            return  dist[u];

        }
        for(int i=0; i<G[u].size(); i++)
        {
            int v = G[u][i].second;
            int w = G[u][i].first;
            if(!visit[v] && dist[u]+w < dist[v])
            {
                dist[v] = dist[u] +w;
                pq.push({dist[v],v});
                before[v] = u;
            }
        }

    }
    return -1;
}
int main()
{
    int f,n;
    cin >> f >> n;
    for(int i=0; i<n; i++)
    {
        int a,b,w;
        cin >> a >> b >> w;
        G[a].push_back({w,b});
        G[b].push_back({w,a});
    }
    if(dj(1,f)==-1)
        cout << "-1";

    else
    {

        int x = f;
        //v.push_back(x);

        while(1)
        {
            v.push_back(x);
            if(x == 1)
                break;
            x = before[x];
        }
        reverse(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }

}
