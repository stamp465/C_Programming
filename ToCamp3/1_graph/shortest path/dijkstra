#include<bits/stdc++.h>         ///https://www.proprog.tk/tasks/sssp/descs/7706
using namespace std;            /// distar algor
#define pii pair<int,int>
#define x first
#define y second

const int INF = 1e9;
const int N = 2e4 + 5; 			/// after e is count 0f 0 (2e4 = 20000)
int n,m,s,t;
int dis[N];
char outp[N];
vector<pii> g[N];

char* solve() {
	scanf("%d %d %d %d",&n,&m,&s,&t);
	for(int i=0; i<N; i++) dis[i] = INF, g[i].clear();
	for(int i=0,u,v,weight; i<m; i++) {
		scanf("%d %d %d",&u,&v,&weight);
		g[u].emplace_back(v,weight);
		g[v].emplace_back(u,weight);
	}
	priority_queue<pii, vector<pii>, greater<pii> > Q;
	Q.emplace(dis[s] = 0, s);
	while(!Q.empty()) {
		auto u = Q.top();
		//printf("...%d %d...\n",u.first,u.second);
		Q.pop();
		for(auto v : g[u.second]) {
			if(dis[v.first] > u.first + v.second) {
				//printf("%d %d %d...\n",dis[v.first],u.first,v.second);
				Q.emplace(dis[v.first] = u.first + v.second , v.first);
				//printf("change %d %d %d...\n",dis[v.first],u.first,v.second);
				//printf("emplace %d %d...\n",dis[v.first],v.first);
			}
		}
		
	}
	sprintf(outp, "%d", dis[t]);
	if(dis[t] == INF) return "unreachable";
	return outp;
}


int main() {
	int T;
	scanf("%d",&T);
	for(int i=1; i<=T; i++) {
		printf("Case #%d: %s\n",i,solve());
	}
}
