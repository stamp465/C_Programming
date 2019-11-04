#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,D;
	scanf("%d %d",&N,&D);
	int arr[N],countt=0;
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+N);
	for(int i=0;i<N-1;i++){
		if(arr[i]+D>=arr[i+1]){
			countt++;
			i++;
		}
	}
	printf("%d",countt);
}
