#include<cstdio>
int arr[101];
int main() {
	int N,K,M;
	scanf("%d %d",&N,&K);
	for(int i=1; i<=K; i++) {
		scanf("%d",&M);
		arr[M] += 1;
	}
	int max = arr[0],s_max;
	for(int i=1; i<=N; i++) {
		if(arr[i]>max) {
			max = arr[i];
			s_max = i;
		}
	}
	printf("%d\n%d",s_max,max);
}
