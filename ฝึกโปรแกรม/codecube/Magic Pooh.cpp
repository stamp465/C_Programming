//Magic Pooh
//14/25
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> vec[100050];
pair<int,int> dis[100050];
int N,M,K,T;

int solve(int start,int maxdis){
	
	queue<tuple<int,int,int>> q;
	q.emplace(start,0,maxdis);
	while(!q.empty()){
		int st,disnow,maxdis;
		tie(st,disnow,maxdis) = q.front();
		q.pop();
		for(int i=0;i<vec[st].size();i++){
			int maxx = max(maxdis,vec[st][i].second);
			if(dis[vec[st][i].first].first-dis[vec[st][i].first].second > disnow+vec[st][i].second-maxx){
				dis[vec[st][i].first].first = disnow+vec[st][i].second;
				dis[vec[st][i].first].second = maxx;
				q.emplace(vec[st][i].first,disnow+vec[st][i].second,maxx);
			}
		}
	}
	
}

int main(){
	for(int i=0;i<100050;i++)	dis[i].first = 1e9,dis[i].second = 0;
	dis[1].first = 0;
	scanf("%d %d %d %d",&N,&M,&K,&T);
	for(int i=0;i<M;i++){
		int u,v,w;
		scanf("%d %d %d",&u,&v,&w);
		vec[u].emplace_back(v,w);
		vec[v].emplace_back(u,w);
	}
	solve(1,0);
	//for(int i=1;i<=N;i++)	printf("dis %d = %d %d\n",i,dis[i].first,dis[i].second);
	if(dis[N].first-dis[N].second+K<=T){
		printf("Happy Winnie the Pooh :3\n%d",dis[N].first-dis[N].second+K);
	}else{
		printf("No Honey TT");
	}
}

/*
4 5 1 2
1 2 2
2 3 3
1 3 5
1 4 4
3 4 3

7 7 2 4
1 2 1
2 3 1
3 4 1
4 7 3
2 5 1
5 6 1
4 6 1
*/
