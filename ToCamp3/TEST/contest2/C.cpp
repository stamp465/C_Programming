#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
}

int main(){
	long long N,M,maxx=0,ans,ii=0,saveN=0,saveM=0;
	scanf("%lld %lld",&M,&N);
	if(M>N)	swap(M,N);
	if(M%N==0){
		printf("%lld\n",ii);
		return 0;
	}
	else{
		for(long long i=0;i<50000000;i++){
			if( (M+i)%(N-M) == 0 ){
				printf("%lld",i);
				return 0;
			}
			if( (N+i)%(M+i) == 0 ){
				printf("%lld",i);
				return 0;
			}
		}
	}
	/*for(long long i=0;i<6000000;i++){
		long long ch = gcd(N+i,M+i);
		//if(N+i>saveN||M+i>saveM)	break;
		if(ch>maxx&&((N+i)*(M+i))/ch<ans){
			maxx = ch;
			ans = ((N+i)*(M+i))/ch;
			ii = i;
			saveN = N+i;
			saveM = M+i;
		}
	}*/
	printf("%lld\n",ii);
}
