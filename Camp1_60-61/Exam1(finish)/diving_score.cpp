#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace :: std;
int main() {
	int N;
	scanf("%d",&N);
	int arr[N];
	for(int i=0; i<N; i++) {
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+N);
	int sum=0;
	for(int i=0; i<N; i++) {
		if(N==3) {
			sum += arr[i];
		} else {
			if(i!=0&&i!=N-1)
				sum += arr[i];
		}
	}
	printf("%d",sum);
}
