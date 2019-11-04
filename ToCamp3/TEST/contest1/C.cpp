#include<bits/stdc++.h>
using namespace std;

int main() {
	long long x,y;
	scanf("%lld %lld",&x,&y);
	long long arr1[x],arr2[y],dif[x-1];
	
	for(long long i=0; i<x; i++) {
		scanf("%lld",&arr1[i]);
		if(i>0)	dif[i-1] = arr1[i] - arr1[i-1];
	}
	sort(dif,dif+x);
	/*for(long long i=1; i<x; i++) {
		dif[i-1] = arr1[i] - arr1[i-1];
	}*/
	for(long long i=0; i<y; i++) {
		scanf("%lld",&arr2[i]);
		long long a= 0;
		for(long long j=0;j<x-1;j++){
			if( dif[j] % arr2[i] == 0){
				//printf("%d %d...\n",dif[j],arr2[i]);
			}
			else{
				a = 1;
				break;
			}
		}
		if(a==0){
			printf("YES\n%lld %lld",arr1[0],i+1);
			return 0;
		}
	}
	printf("NO");
}
