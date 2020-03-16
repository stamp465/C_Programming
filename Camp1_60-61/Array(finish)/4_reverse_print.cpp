#include<cstdio>
int arr[10001];
int main() {
	int i=0;
	for(i=0; i<10001; i++) {
		scanf("%d",&arr[i]);
		if(arr[i]==0)	break;
	}
	for(i=i-1; i>=0; i--) {
		printf("%d ",arr[i]);
	}
}
