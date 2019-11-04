#include<bits/stdc++.h>
using namespace std;

int main() {
	int N,S;
	while( scanf("%d %d",&N,&S) != EOF) {
		int arr[N],sumall=0;
		for(int i=0; i<N; i++) {
			scanf("%d",&arr[i]);
			sumall += arr[i];
		}
		if(sumall<S) {
			printf("0\n");
			continue;
		} else {
			queue<int> q;
			int suminq = 0;
			int minsize = N;
			for(int i=0; i<N; i++) {
				q.emplace(arr[i]);
				suminq += arr[i];
				while(suminq>=S){
					minsize = min(minsize,(int)q.size());
					suminq -= q.front();
					q.pop();
				}
			}
			printf("%d\n",minsize);
		}
	}
}
