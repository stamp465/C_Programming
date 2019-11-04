#include<bits/stdc++.h>	///https://www.proprog.tk/tasks/street_light/descs/288
using namespace std;	///Krusca
const int INF = 1e9;
int N,M,sum=0,shortt;
vector<tuple<int,int,int>> vec;
int par[200000];


int findtop(int st) {
	if(par[st]==st) return st;
	int z = findtop(par[st]);
	par[st] = z;
	return z;
}

//findtop(int st) { return par[u] = u == par[u] ? u : findtop(par[u]); }

int main() {
	while(1) {

		scanf("%d %d",&N,&M);
		if(N==0&&M==0)	break;
		sum = 0;	shortt=0;
		vec.clear();
		iota(par,par+N,0);
		for(int i=0,st,en,light; i<M; i++) {
			scanf("%d %d %d",&st,&en,&light);
			sum += light;
			vec.emplace_back(light,st,en);
		}
		sort(vec.begin(),vec.end());

		for(auto v : vec) {
			int light,st,en;
			tie(light,st,en) = v;
			int a = findtop(st),b = findtop(en);
			if(a!=b) {
				par[a] = b;
				shortt += light;
			}
		}
		///shortt = short dis for 0 to N
		printf("%d\n",sum - shortt);
	}

}
