#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+5;

int n, m;
int sum, par[N];
vector<tuple<int, int, int>> vec;

int find(int u) { return par[u] = u == par[u] ? u : find(par[u]); }

int main() {
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; ++i) par[i] = i;
    for(int i = 0, u, v, w; i < m; ++i) {
        scanf("%d %d %d", &u, &v, &w);
        sum += w;
        vec.emplace_back(w, u, v);
    }
    sort(vec.begin(), vec.end());
    for(auto edge : vec) {
        int w, u, v; tie(w, u, v) = edge;
        int a = find(u), b = find(v);
        if(a != b) {
            par[a] = b;
            sum -= w;
        }
    }
    printf("%d\n", sum);
}