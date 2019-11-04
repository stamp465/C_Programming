#include<bits/stdc++.h>
using namespace std;

template<typename P> struct Cmp
{
    bool operator()(const P &p1, const P &p2)
    {
        if(p1.first == p2.first)  	return p1.second > p2.second;
       	else						return p1.first < p2.first;
    }
};

int main() {
	long long N;
	scanf("%lld",&N);
	long long maxx = -1e9,maxy = -1e9;
	vector<pair<long long,long long> > vec;
	vector<pair<long long,long long> > ans;
	for(long long i=0; i<N; i++) {
		long long x,y;
		scanf("%lld %lld",&x,&y);
		vec.emplace_back(x,-y);
	}
	sort(vec.rbegin(),vec.rend());
	for(long long i=0; i<N; i++) {
		if(-vec[i].second >= maxy){
			if(-vec[i].second >= maxy)	maxy = -vec[i].second;
			printf("%lld %lld\n",vec[i].first,-vec[i].second);
		}
	}


}
