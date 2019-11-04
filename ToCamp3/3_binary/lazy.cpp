#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,M;
	scanf("%d %d",&N,&M);
	unordered_map<int,vector<int> > mapp(100000);
	for(int i=1;i<=N;i++){
		int num;
		scanf("%d",&num);
		mapp[num].emplace_back(i);
	}
	for(int i=0;i<M;i++){
		int st,en,num;
		scanf("%d %d %d",&st,&en,&num);
		auto it1 = lower_bound(mapp[num].begin(),mapp[num].end(),st);
		auto it2 = upper_bound(mapp[num].begin(),mapp[num].end(),en);
		printf("%d\n",it2-it1);
	}
}
