#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main() {
	int T;
	scanf("%d",&T);
	for(int t=1,n,m,money; t<=T; t++) {
		int savemon = INF,savearea = 0,savei,savej,savek1,savek2;
		scanf("%d %d %d",&n,&m,&money);
		int arr[n+1][m+1];
		int sum[m+1];
		for(int i=0; i<=n; i++) {
			for(int j=0; j<=m; j++) {
				arr[i][0] = 0;
				arr[0][j] = 0;
				sum[j] = 0;
			}
		}
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				scanf("%d",&arr[i][j]);
				arr[i][j] += arr[i-1][j];
			}
		}

		for(int i=1; i<=n; i++) {
			for(int j=i; j<=n; j++) {
				int back_k=1;
				for(int k=1; k<=m; k++) {
					sum[k] = arr[j][k] - arr[i-1][k];
					if(sum[k-1]+sum[k] <= money ) {
						sum[k] += sum[k-1];
					}
					else{
						back_k = k;
					}
					if(sum[k]<=money) {
						if((k-back_k+1)*(j-i+1) == savearea) {
							if(sum[k]<savemon){
								savemon = sum[k];
								savei = i;
								savej = j;
								savek1 = back_k;
								savek2 = k;
							}
						} else if( (k-back_k+1)*(j-i+1) > savearea ) {
							savearea = (k-back_k+1)*(j-i+1);
							savemon = sum[k];
							savei = i;
							savej = j;
							savek1 = back_k;
							savek2 = k;
						}

					}
				}
			}
		}
		printf("Case #%d: %d\n",t,savearea,savemon);
	}
}

/*
2
5 5 10
1 1 1 1 1
2 2 2 1 1
3 3 3 3 3
1 1 1 2 2
1 1 1 1 1
*/
