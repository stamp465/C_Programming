#include <cstdio>

int main(){
	int count=1,sum=0,weight,n,ar[1000];
	scanf("%d %d",&n,&weight);
	for(int a=0;a<n;a++){
		scanf("%d",&ar[a]);
	}
	for(int a=0;a<n;a++){
		if(sum+ar[a]>weight){
			sum=0;
			count++;
		}
		if(sum+ar[a]<=weight){
			sum+=ar[a];
		}
	}
	printf("%d",count);
	return 0;
}
