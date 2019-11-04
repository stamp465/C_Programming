#include<bits/stdc++.h>
using namespace std;
int check[1006][1006];
int main() {
	int T;
	scanf("%d",&T);
	while(T--) {
		int N,G,m,w;
		scanf("%d",&N);
		for(int i = 0; i < 1006; i++) {
			for(int j = 0; j < 1006; j++) {
				check[i][j] = 0;
			}
		}
		for(int i=1; i<=N; i++) {
			scanf("%d %d\n",&m,&w);
			check[i][w] = m;
			for(int j=1; j<1006; j++) {
				if(j<w){
					check[i][j] = max(check[i-1][j],check[i][j-1]);
				}
				else{
					check[i][j] = max(max(check[i-1][j],check[i][j-1]),m+check[i-1][j-w]);
				}
			}
		}

		scanf("%d",&G);
		int sum = 0;
		for(int i=0; i<G; i++) {
			int want;
			scanf("%d",&want);
			sum += check[N][want];
		}
		printf("%d\n",sum);
	}
}
