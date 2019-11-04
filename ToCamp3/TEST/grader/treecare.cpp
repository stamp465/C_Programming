#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,P,countt=0;
	scanf("%d %d %d",&N,&M,&P);
	int arr[N]={0},sum[N]={0},qs[N]={0};
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
		if(i>0){
			sum[i] = arr[i]-arr[i-1];
		}
	}
}
