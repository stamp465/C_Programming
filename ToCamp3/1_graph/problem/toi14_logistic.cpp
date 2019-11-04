#include <bits/stdc++.h>
using namespace std;
int p[128];
vector<pair<tuple<int,int,int>,int> > g[128][128][2];
int dist[128][128][2];
class state{
public:
    int u; // Current City
    int ff; // Current Fuel
    int tk; // Current Free ticket used (0: unused, 1: used)
    int d; // Current distance
    state(int a, int b, int c, int d) : u(a), ff(b), tk(c), d(d) {}
    friend bool operator<(state x, state y){
        return x.d > y.d;
    }
};
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        scanf("%d",p+i);
    }
    int s,d,f;
    scanf("%d%d%d",&s,&d,&f);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= f; j++){
            for(int k = j+1; k <= f; k++){
                g[i][j][0].emplace_back(make_tuple(i,k,0), (k-j)*p[i]);
                g[i][j][1].emplace_back(make_tuple(i,k,1), (k-j)*p[i]);
                g[i][j][0].emplace_back(make_tuple(i,k,1), 0);
            }
            dist[i][j][0] = dist[i][j][1] = 1e9;
        }
    }
    int m;
    scanf("%d",&m);
    for(int i = 0; i < m; i++){
        int a,b,w;
        scanf("%d%d%d",&a,&b,&w);
        for(int j = w; j <= f; j++){
            g[a][j][0].emplace_back(make_tuple(b, j-w, 0), 0);
            g[b][j][0].emplace_back(make_tuple(a, j-w, 0), 0);
            g[a][j][1].emplace_back(make_tuple(b, j-w, 1), 0);
            g[b][j][1].emplace_back(make_tuple(a, j-w, 1), 0);
        }
    }
    priority_queue<state> pq;
    pq.emplace(s,0,0,0);
    while(!pq.empty()){
        state cur = pq.top();
        pq.pop();
        for(auto nxt : g[cur.u][cur.ff][cur.tk]){
            int v;
            int nf;
            int nt;
            tie(v,nf,nt) = nxt.first;
            int cost = nxt.second;
            if(cur.d + cost < dist[v][nf][nt]){
                dist[v][nf][nt] = cur.d+cost;
                pq.emplace(v,nf,nt,cur.d+cost);
            }
        }
    }
    printf("%d\n",min(dist[d][f][0],dist[d][f][1]));
    return 0;
}
