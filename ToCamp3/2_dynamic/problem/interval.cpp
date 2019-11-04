#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long  N,count=0,ans=0;
	scanf("%lld",&N);
	vector<pair<long long,long long> > vec;
	for(long long i=0;i<N;i++){
		long long st,en;
		scanf("%lld %lld",&st,&en);
		vec.emplace_back(st,1);
		vec.emplace_back(en,-1);
	}
	sort(vec.begin(),vec.end());
	for(long long i=0;i<vec.size();i++){
		//printf("%d %d\n",vec[i].first,vec[i].second);
		if(vec[i].second==1)	count++;
		
		if(count>=2 && vec[i].second==-1){
			ans += count - 1;
		}
		if(vec[i].second==-1)	count--;
	}
	printf("%lld",ans);
}

/*
5
4 6
3 7
2 8
1 9
0 10

6
1 3
1 3
1 3
1 3
1 3
1 3

5
2 3
2 3
2 3
1 3
1 2

6
1 3
1 3
1 6
4 6
4 6
4 6
*/
