#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
vector<tuple<int,int,int> > vec;

int par[200000];

int findtop(int st) {
	if(par[st]==st) return st;
	int z = findtop(par[st]);
	par[st] = z;
	return z;
}

int mst(int st,int en,vector<pair<int,int> > v[]) {
	int dis[200],visit[200]= {0};
	for(int i=0; i<200; i++)	dis[i] = INF;
	queue<int> q;
	q.emplace(st);
	dis[st] = 0;
	while(!q.empty()) {
		int go = q.front();
		visit[go] = 1;
		//printf(" %d %d...\n",go,dis[go]);
		if(go==en) break;
		q.pop();
		for(int i=0; i<v[go].size(); i++) {
			if(visit[v[go][i].first]==0) {
				if(dis[v[go][i].first]==INF) {
					dis[v[go][i].first] = v[go][i].second;
				}
				dis[v[go][i].first] = max(dis[go],v[go][i].second);
				q.emplace(v[go][i].first);
			}
		}
	}
	//printf(" %d...\n",dis[en]);
	return dis[en];
}


int main() {
	int cc=0;
	while(1) {
		cc++;
		int N,M,Q;
		scanf("%d %d %d",&N,&M,&Q);
		if(N==0&&M==0&&Q==0)	break;
		else {
			vec.clear();
			vector<pair<int,int> > vec_t[200];
			iota(par,par+N,0);
			for(int i=0; i<M; i++) {
				int u,v,w;
				scanf("%d %d %d",&u,&v,&w);
				vec.emplace_back(w,u,v);
			}
			sort(vec.begin(),vec.end());
			for(auto aa : vec) {
				int w,u,v;
				tie(w,u,v) = aa;
				int a = findtop(u),b = findtop(v);
				if(a!=b) {
					par[a] = b;
					vec_t[u].emplace_back(v,w);
					vec_t[v].emplace_back(u,w);
				}
			}
			int ans[Q];
			for(int i=0; i<Q; i++) {
				int st,en;
				scanf("%d %d",&st,&en);
				int dis = mst(st,en,vec_t);
				ans[i] = dis;
			}
			printf("Case #%d\n",cc);
			for(int i=0; i<Q; i++) {
				if(ans[i]==INF) printf("no path\n");
				else {
					printf("%d\n",ans[i]);
				}
			}
		}
	}
}
