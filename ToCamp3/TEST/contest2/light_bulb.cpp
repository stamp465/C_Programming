#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N;
	while(1){
		scanf("%lld",&N);
		if(N<=0)	break;
		long long a = (long long)sqrt(N);
		//printf("...%lld\n",a);
		if(a*a==N){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
}
