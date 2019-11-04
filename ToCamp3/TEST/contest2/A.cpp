#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,cee[2]={0},coo[2]={0};
	scanf("%d %d",&N,&M);
	int n,a=0;
	for(int i=0;i<N;i++){
		scanf("%d",&n);
		if(n%2==0)	coo[0]++;
		else		cee[0]++;
	}
	for(int i=0;i<M;i++){
		scanf("%d",&n);
		if(n%2==0)	coo[1]++;
		else		cee[1]++;
	}
	a = min(coo[0],cee[1]);
	a += min(cee[0],coo[1]);
	printf("%d\n",a);
}
