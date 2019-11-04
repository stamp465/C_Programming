#include<bits/stdc++.h>
using namespace std;
long par[200005];
long findtop(long st){
	if(st==par[st]){
		return st;
	}
	long z = findtop(par[st]);
	par[st] = z;
	return z;
}


int main(){
	long long int N,M,sum=0,countt=0;
	scanf("%lld %lld",&N,&M);
	for(long i=1;i<=N;i++)	par[i] = i;
	vector<tuple<long,long,long> > vec;
	for(long i=0;i<M;i++){
		long st,en,weight;
		scanf("%ld %ld %ld",&st,&en,&weight);
		vec.emplace_back(weight,st,en);
	}
	sort(vec.begin(),vec.end());
	reverse(vec.begin(),vec.end());
	
	for(auto v:vec){
		long st,en,weight;
		tie(weight,st,en) = v;
		long topst = findtop(st),topen = findtop(en);
		if(topst!=topen){
			countt++;
			par[topen] = topst;
			sum += weight;
			//prlongf("%d %d %d...\n",st,en,weight);
		}
	}
	printf("%lld\n",sum-countt);
}
