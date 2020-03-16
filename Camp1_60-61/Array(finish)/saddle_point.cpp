#include<cstdio>
int main() {
	int R,C;
	scanf("%d %d",&R,&C);
	int arr[R][C];
	for(int i=0; i<R; i++) {
		for(int j=0; j<C; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	int max_row[R],max_col[C],min_row[R],min_col[C];
	for(int i=0; i<R; i++) {
		if(i==0) {
			for(int j=0; j<C; j++) {
				max_col[j] = arr[i][j];
				min_col[j] = arr[i][j];
			}
		}
		for(int j=0; j<C; j++) {
			if(j==0) {
				max_row[i] = arr[i][j];
				min_row[i] = arr[i][j];
			}
			if(max_row[i]<arr[i][j])	max_row[i] = arr[i][j];
			if(min_row[i]>arr[i][j])	min_row[i] = arr[i][j];
			if(max_col[j]<arr[i][j])	max_col[j] = arr[i][j];
			if(min_col[j]>arr[i][j])	min_col[j] = arr[i][j];
		}
	}
	bool check = true;
	for(int i=0; i<R; i++) {
		for(int j=0; j<C; j++) {
			if(arr[i][j]==max_row[i]&&arr[i][j]==min_col[j]) {
				check = false;
				printf("(%d, %d) = %d\n",i,j,arr[i][j]);
			} else if(arr[i][j]==min_row[i]&&arr[i][j]==max_col[j]) {
				check = false;
				printf("(%d, %d) = %d\n",i,j,arr[i][j]);
			}
		}
	}
	if(check==true)	printf("None");
}
