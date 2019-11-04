#include<bits/stdc++.h>
using namespace std;

int main(){
	while(1){
		int N,maxx=0;
		scanf("%d",&N);
		if(N==0)	break;
		int num[N+1]={0};
		for(int i=1;i<=N;i++){
			scanf("%d",&num[i]);
			num[i] += max(0,num[i-1]);
			if(num[i]>maxx)	maxx = num[i];
		}
		if(maxx>0)	printf("The maximum winning streak is %d.\n",maxx);
		else		printf("Losing streak.\n");
	}
}
