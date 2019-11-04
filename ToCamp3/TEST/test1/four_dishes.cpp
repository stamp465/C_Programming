#include<bits/stdc++.h>
using namespace std;

int main() {
	long long N,S,countt=0;
	scanf("%lld %lld",&N,&S);
	long long arr[N];
	for(int i=0; i<N; i++) {
		scanf("%lld",&arr[i]);
	}
	sort(arr,arr+N);
	for(int i=0; i<N-3; i++) {
		if(arr[i]>S)	break;
		for(int j=i+1; j<N-2; j++) {
			if(arr[i]>S-1ll)	break;
			for(int k=j+1; k<N-1; k++) {
				if(arr[i]>S-2ll)	break;
				for(int l=k+1; l<N; l++) {
					if(arr[i]>S-3ll)	break;
					if(arr[i]+arr[j]+arr[k]+arr[l]==S) {
						countt++;
					}
				}
			}
		}
	}
	printf("%lld\n",countt*(long long)24);
}
