#include<bits/stdc++.h>
using namespace std;
long long C(long long n,long long r) {
	long long sum1=1,sum2=1;
	if(n-r < r) r = n-r;
	for(long long i=0; i<r; i++) {
		sum1 *= n-i;
		sum2 *= r-i;
	}
	return sum1/sum2;
}
int main() {
	long long T;
	scanf("%lld",&T);
	while(T--) {
		long long N,X,P;
		scanf("%lld %lld %lld",&N,&X,&P);
		long long n=X-(N*P)+N-1ll,r=N-1ll;
		printf("%lld\n",C(n,r));
	}

}
