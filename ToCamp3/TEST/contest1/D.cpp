#include<bits/stdc++.h>
using namespace std;

int main() {
	long long N,x,aa=30000000000000000;
	cin >> N >> x;
	long long arr[N+1] = {0};
	long long finalarr[N+1] = {0};
	long long pre[N+1] = {0};
	long long max1[N+1]= {0};
	long long minn=0,maxx=-1e10;
	long long saveminn=0,savemaxx=0;
	for(long long i=1; i<=N; i++) {
		cin >> arr[i];
		finalarr[i] = arr[i];
		long long a = arr[i];
		if(x>=0) {
			arr[i] += max((long long)0, arr[i-1]);
			if(arr[i]==a) {
				pre[i] = i;
			} else {
				pre[i] = pre[i-1];
			}
			if(arr[i]>=maxx) {
				if(arr[i]==maxx&&i-pre[i]>savemaxx-pre[savemaxx]){
					maxx = arr[i];
					savemaxx = i;
				}
				else {
					maxx = arr[i];
					savemaxx = i;
				}
			}
		} else {
			arr[i] += min((long long)0, arr[i-1]);
			if(arr[i]==a) {
				pre[i] = i;
			} else {
				pre[i] = pre[i-1];
			}
			if(arr[i]<=minn) {
				if(arr[i]==minn&&i-pre[i]>saveminn-pre[saveminn]){
					minn = arr[i];
					saveminn = i;
				}
				else {
					minn = arr[i];
					saveminn = i;
				}
			}
		}
		//printf("%d ",arr[i]);
		//printf("%d ",pre[i]);
	}
	long long truemax = -1e10;
	if(x>=0) {
		//printf("%d %d\n",maxx,savemaxx);
		for(long long i=pre[savemaxx]; i<=savemaxx; i++) {
			finalarr[i] *= x;
		}
		for(long long i = 1; i <= N; ++i) {
			finalarr[i] += max((long long)0, finalarr[i-1]);
			if(finalarr[i]>truemax)	truemax = finalarr[i];
		}
	} else {
		//printf("%d %d\n",minn,saveminn);
		for(long long i=pre[saveminn]; i<=saveminn; i++) {
			finalarr[i] *= x;
		}
		for(long long i = 1; i <= N; ++i) {
			finalarr[i] += max((long long)0, finalarr[i-1]);
			if(finalarr[i]>truemax)	truemax = finalarr[i];
		}
	}
	if(truemax<0) {
		cout << "0";
	} else {
		cout << truemax;
	}
}
