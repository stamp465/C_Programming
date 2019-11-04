#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> mapp(1000000);

int main() {
	long long N,S,countt=0;
	scanf("%lld %lld",&N,&S);
	long long arr[N];
	for(int i=0; i<N; i++) {
		scanf("%lld",&arr[i]);
	}
	for(int i=0; i<N-1; i++) {
		for(int j=i+1; j<N; j++) {
			mapp[arr[i]+arr[j]]++;
		}
	}
	for(auto it1 = mapp.begin(); it1 != mapp.end(); it1++) {
		for(auto it2 = mapp.begin(); it2 != mapp.end(); it2++) {
			cout << it1->first << " " << it1->second << "...";
			cout << it2->first << " " << it2->second << endl;
			if(it1->first+it2->first==S&&it1->second>0&&it2->second>0) {
				if(it1->first!=it2->first&&it1->second>0&&it2->second>0) {
					it1->second--;
					it2->second--;
					countt++;
					printf("11111\n");
				} else if(it1->first==it2->first&&it1->second>1) {
					it1->second-=2;
					countt++;
					printf("222222\n");
				}
			}
		}
	}
	printf("%lld\n",countt*(long long)24);
}
