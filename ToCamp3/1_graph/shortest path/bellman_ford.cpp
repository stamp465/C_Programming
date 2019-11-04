#include<bits/stdc++.h>		///bellman fora
using namespace std;		
const int INF = 1e9;
int d[10000];

int main() {
	int T;
	scanf("%d",&T);
	while(T--) {
		int N,M;
		scanf("%d %d",&N,&M);
		for(int i=1; i<N; i++)	d[i] = INF;
		vector<tuple<int,int,int> > vec;
		for(int i=0; i<M; i++) {
			int st,en,weight;
			scanf("%d %d %d",&st,&en,&weight);
			vec.emplace_back(st,en,weight);
		}

		for(int i=0; i<N; i++) {
			for(auto go : vec) {
				int u,v,w;
				tie(u,v,w) = go;
				if(d[v] > d[u] + w)
					d[v] = d[u] + w;
			}
		}
		bool pos = true;
		for(auto go : vec) {
			int u,v,w;
			tie(u,v,w) = go;
			if(d[v] > d[u] + w)
				pos = false;
		}
		if(pos == true)	printf("not possible\n");
		else printf("possible\n");
	}
}
