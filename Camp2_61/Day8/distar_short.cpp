#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > g[10000];
vector<int> gotog[10000],check;
int visit[10000];
int dis[10000];
int before[1000];
void distar(int node,int endnode)
{
    //visit[node]=1;
    queue<int> go;
    go.push(node);
    while(!go.empty())
    {
        int u=go.front();
        go.pop();
        if(visit[u]==0){
            visit[u] = 1;
            for(int i=0;i<g[u].size();i++)
            {
            //visit[g[u][i].first]=1;
            //printf("It in %d ->f %d ->s %d\n",u,g[u][i].first,g[u][i].second);
                if(visit[g[u][i].first]==0) {
                    go.push(g[u][i].first);
                }
                if(dis[g[u][i].first]==0) dis[g[u][i].first] = dis[u]+g[u][i].second;
                else dis[g[u][i].first] = min(dis[g[u][i].first],dis[u]+g[u][i].second);
            //printf("dis %d -> %d\n",dis[g[u][i].first],g[u][i].first)
            }
        }
    }
}

int main()
{
    int N;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        int st,en,weigh;
        cin >> st >> en >> weigh;
        g[st].push_back(make_pair(en,weigh));
        g[en].push_back(make_pair(st,weigh));
    }
    int star,endd;
    cin >> star >> endd;
    distar(star,endd);
    cout << dis[endd] << endl;

}
/*
7
4 1 3
4 2 6
1 0 3
1 2 5
2 0 1
2 3 5
0 3 6

*/
