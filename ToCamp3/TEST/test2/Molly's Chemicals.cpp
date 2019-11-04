#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll N,K;
	scanf("%lld %lld",&N,&K);
	ll arr[N+1],qs[N+1]={0};
	arr[0] = 0;
	for(ll i=1;i<=N;i++){
		scanf("%lld",&arr[i]);	
		qs[i] = qs[i-1] + arr[i];
		//cout << qs[i] << " ";
	}
	ll check = 1;
	for(ll i=0;i<=10;i++){
		if(i>0)	check *= K;
		if(check>qs[N])	break;
		
	}
	
}
