#include<bits/stdc++.h>			///https://www.proprog.tk/tasks/toi11_labor/descs/6787
using namespace std;

int main() {
	long long M,N;
	scanf("%lld %lld",&M,&N);
	long long arr[M];
	for(long long i=0; i<M; i++) {
		scanf("%lld",&arr[i]);
	}
	long long st=0,en=1000000000000;
	long long mid = (st+en)/2;
	long long save=1e12;
	while(1) {
		long long sum=0,ch=0,a=N;
		for(long long i=0; i<M; i++) {
			sum += mid/arr[i];
		}
		if(sum >= N) {
			if(mid<=save) {
				save = mid;
			}
			en = mid-1;
			mid = (st+en)/2;
		} else {
			st = mid+1;
			mid = (st+en)/2;
		}
		if(st>en)	break;

		//printf("%lld..%lld %lld--%lld %lld\n",sum,mid,save,st,en);
	}
	printf("%lld\n",save);
}
