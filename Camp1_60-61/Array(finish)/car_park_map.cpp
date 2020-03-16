#include<cstdio>
int arr[102][102];
int main() {
	int M,N;
	scanf("%d %d",&M,&N);
	//int arr[M+1][N+1];
	int K;
	scanf("%d",&K);
	for(int i=0; i<K; i++) {
		int a,b;
		scanf("%d %d",&a,&b);
		arr[a][b] = 1;
	}
	for(int i=1; i<=M; i++) {
		for(int j=1; j<=N; j++) {
			if(arr[i][j]==1)	printf("x");
			else printf("_");
		}
		printf("\n");
	}
}
