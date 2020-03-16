#include<cstdio>
int main() {
	int N;
	scanf("%d",&N);
	int arr[N+1][N+1];
	int check_print[N+1][N+1];
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			scanf("%d",&arr[i][j]);
			check_print[i][j] = false;
		}
	}
	int count=0;

	for(int i=2; i<N; i++) {
		for(int j=2; j<N; j++) {
			bool check = true;
			for(int a=-1; a<2; a++) {
				bool check2 = true;
				for(int b=-1; b<2; b++) {
					if(arr[i+a][j+b]>=arr[i][j]&&(a!=0||b!=0)) {
						check = false;
						check2 = false;
						break;
					}	
				}
				if(check2==false)	break;
			}
			if(check==true) {
				count++;
				check_print[i][j] = true;
			}
		}
	}
	printf("%d\n",count);
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=N; j++) {
			if(check_print[i][j] == true)
				printf("%d %d %d\n",arr[i][j],i-1,j-1);
		}
	}
}
