#include<bits/stdc++.h>
using namespace std;

int main() {

	int N,maxx=0;
	scanf("%d",&N);

	int arr[N+1][N+1];
	int sum[N+1];
	for(int i=0; i<=N; i++) {
		for(int j=0; j<=N; j++) {
			sum[i] = 0;
			if(i==0||j==0) {
				arr[i][j] = 0;
				continue;
			}
			scanf("%d",&arr[i][j]);
			arr[i][j] += arr[i-1][j];
		}
	}
	/*for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}*/
	for(int i=1; i<=N; i++) {
		for(int j=i; j<=N; j++) {
			for(int k=1; k<=N; k++) {
				sum[k] = max(sum[k-1],0) + arr[j][k] - arr[i-1][k];
				if(sum[k] > maxx) {
					maxx = sum[k];
				}
			}
		}
	}
	printf("%d\n",maxx);

}
/*
4
0 -2 -7  0
9  2 -6  2
-4  1 -4  1
-1 8  0 -2
*/
