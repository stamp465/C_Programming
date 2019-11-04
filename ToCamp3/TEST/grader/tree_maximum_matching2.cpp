#include<bits/stdc++.h>
using namespace std;
vector<int> graph[200001],savedfs;
int check[200001],countt=0;
int dfs(int current,int parent) {
	savedfs.emplace_back(current);
	for(auto i:graph[current]){
		if(i==parent)	continue;
		else{
			dfs(i,current);
		}
	}
}

int main() {
	int N;
	scanf("%d",&N);
	for(int i=0; i<N-1; i++) {
		int st,en;
		scanf("%d %d",&st,&en);
		graph[st].emplace_back(en);
		graph[en].emplace_back(st);
	}
	dfs(1,0);
	/*for(auto i:savedfs){
		cout << i << " ";
	}*/
	for(int i=N-1;i>=0;i--){
		for(auto j : graph[savedfs[i]]){
			if(check[savedfs[i]]==0&&check[j]==0){
				check[j] = 1;
				check[savedfs[i]] = 1;
				countt++;
			}
		}
	}
	cout << countt;
}

/*
8
1 5
5 4
4 2
2 8
3 6
7 3
4 6

*/
