#include<cstdio>
int main() {
	int M,N,i;
	scanf("%d %d",&M,&N);
	int arr[M+1][N+1];
	for(i=1; i<=M; i++) {
		for(int j=1; j<=N; j++) {
			arr[i][j] = 0;
		}
	}
	int K,a,b;
	scanf("%d",&K);
	for(i=1; i<=K; i++) {
		scanf("%d %d",&a,&b);
		arr[a][b] = i;
	}
	for(i=1; i<=M; i++) {
		for(int j=1; j<=N; j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
