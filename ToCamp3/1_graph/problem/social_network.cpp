#include<bits/stdc++.h>
using namespace std;

int par[100005],sz[100005];

int findtop(int st){
	if(par[st]==st){
		return st;
	}
	else{
		int z = findtop(par[st]);
		par[st] = z;
		return z;
	}
}

void solve(){
	for(int i=0;i<100005;i++){
		par[i] = i;
		sz[i] = 1;
	}
	map<string,int> mapp;
	int step = 0, M;
	scanf("%d",&M);
	for(int i=0;i<M;i++){
		string u,v;
		cin >> u >> v;
		int nu,nv;
		if(mapp[u]){
			nu = mapp[u];
		}
		else{
			nu = mapp[u] = ++step;
		}
		if(mapp[v]){
			nv = mapp[v];
		}
		else{
			nv = mapp[v] = ++step;
		}
		int a = findtop(nu),b = findtop(nv);
		if(a!=b){
			par[a] = b;
			sz[b] += sz[a];
		}
		printf("%d\n",sz[b]);
	} 
}

int main() {
	int T;
	scanf("%d",&T);
	while(T--){
		solve();
	}
}
