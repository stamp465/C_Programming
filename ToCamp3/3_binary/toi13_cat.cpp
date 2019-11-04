#include<bits/stdc++.h>
using namespace std;

int main() {
	long long N,maxx=-1e9;
	vector<long long> cat;
	scanf("%lld",&N);
	for(long long i=0; i<N; i++) {
		long long c;
		scanf("%lld",&c);
		cat.emplace_back(c);
	}
	long long st=0,en=1e15;
	long long mid = (st+en)/2;
	long long save=1e15;
	while(1) {
		long long ch=0;
		vector<long long> veclarge;
		stack<long long>checksame;
		for(long long i=0; i<N; i++) {
			if(mid<cat[i]) {
				if(checksame.empty())	checksame.emplace(cat[i]);
				else {
					if(checksame.top()==cat[i])	checksame.pop();
					else	break;
				}
			}
		}
		//printf("%lld...%lld--%lld--%lld\n",save,st,mid,en);
		//printf("\n");
		if(!checksame.empty()) {

			st = mid+1;
			mid = (st+en)/2;
			ch = 1;
			//printf("****...%lld %lld %lld\n",st,mid,en);
		}
		if(ch==0) {
			if(mid<save) {
				save = mid;
			}
			en = mid-1;
			mid = (st+en)/2;
		}


		if(st>en)	break;

	}
	printf("%lld",save);

}
