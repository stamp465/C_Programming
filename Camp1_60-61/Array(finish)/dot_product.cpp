#include<cstdio>
int main() {
	int N,sum=0;
	scanf("%d",&N);
	int u[N],v[N];
	for(int i=0; i<N; i++) 	scanf("%d",&u[i]);
	for(int i=0; i<N; i++) 	scanf("%d",&v[i]);
	for(int i=0; i<N; i++) 	sum += u[i]*v[i];
	printf("%d",sum);
}
