#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int N,Q;
vector<pair<int,int> > vec;

int main() {

	scanf("%d",&N);
	int arr[N][N];
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	int dis[N][N];
	for(int k=0; k<N; k++) {
		for(int i = 0; i<N; i++) {
			for(int j=0; j<N; j++) {

				if(arr[i][j] > arr[i][k] + arr[k][j]) {
					arr[i][j] = arr[i][k] + arr[k][j];
				}
			}
		}
	}
	scanf("%d",&Q);
	for(int i=0; i<Q; i++) {
		int A,B,C;
		scanf("%d %d %d",&A,&B,&C);
		printf("%d %d\n",arr[A][B]+arr[B][C],arr[A][B]+arr[B][C] - arr[A][C]);
	}
}
