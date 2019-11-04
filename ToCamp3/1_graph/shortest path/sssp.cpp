#include <bits/stdc++.h>
#define pii pair<int, int>
#define x first
#define y second
const int INF = 1e9;
using namespace std;

const int N = 2e4+5;

int n, m, s, t;
int d[N];
char outp[N];
vector<pii> g[N];

int main() {
    int T; scanf("%d", &T);
    for(int i = 1; i <= T; ++i) {
        printf("Case #%d: ", i);
        scanf("%d %d %d %d", &n, &m, &s, &t);
        for(int i = 0; i < N; ++i) d[i] = INF, g[i].clear();
        for(int i = 0, u, v, w; i < m; ++i) {
            scanf("%d %d %d", &u, &v, &w);
            g[u].emplace_back(v, w), g[v].emplace_back(u, w);
        }
        priority_queue<pii, vector<pii>, greater<pii> > Q;
        Q.emplace(d[s] = 0, s);
        while(!Q.empty()) {
            pii u = Q.top(); Q.pop();
            for(pii v : g[u.y]) if(d[v.x] > u.x + v.y)
                Q.emplace(d[v.x] = u.x + v.y, v.x);
        }
        if(d[t] == INF) printf("unreachable\n");
        else printf("%d\n", d[t]);
    }
}