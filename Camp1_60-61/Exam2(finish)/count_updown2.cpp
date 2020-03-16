#include<cstdio>
int main() {
	int N,M,be=1;
	scanf("%d",&N);
	for(int i=0; i<N; i++) {
		scanf("%d",&M);
		if(M>be) {
			if(M-be<11) {
				for(int j=be; j<=M; j++) {
					printf("%d ",j);
				}
				printf("\n");
			} else
				printf("%d %d %d . . . %d %d %d\n",be,be+1,be+2,M-2,M-1,M);
		}
		if(M<be) {
			if(be-M<11) {
				for(int j=be; j>=M; j--) {
					printf("%d ",j);
				}
				printf("\n");
			} else
				printf("%d %d %d . . . %d %d %d\n",be,be-1,be-2,M+2,M+1,M);
		}
		be = M;
	}
}
