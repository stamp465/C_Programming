#include<bits/stdc++.h>
using namespace std;


int main(){
	long long N,S;
	scanf("%lld %lld",&N,&S);
	long long coo = N;
	if(coo%2==1)	coo--;
	long long arr[N+1]={0};
	long long qs[N+1]={0};
	long long save[N+1]={0};
	for(long long i=1;i<=N;i++){
		scanf("%lld",&arr[i]);
		qs[i] += arr[i] + qs[i-1];
	}
	for(long long i=coo;i>=2;i-=2){
		for(long long j=i;j<=N;j++){
			if(save[j]!=0)	continue;
			long long ch = qs[j]-qs[j-i];
			long long ch2 = qs[j]-qs[j-i/2];
			//cout << ch << " " << ch2 << endl;
			if(ch<=2*S){
				//cout << "will";
				if(ch2<=S&&(ch-ch2)<=S){
					//cout << "hey";
					//cout << i << " " << j << endl;
					if(save[j-i+1]==0){
						save[j-i+1] = i;
						//cout << "change" << endl;
					}
				}
			}
		}
	}
	for(long long i=1;i<=N;i++){
		printf("%lld\n",save[i]);
	}
}
