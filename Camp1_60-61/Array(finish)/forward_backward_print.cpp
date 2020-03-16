#include<cstdio>
int main()
{
	int N,plus;
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)	scanf("%d",&arr[i]);
	scanf("%d",&plus);
	for(int i=0;i<N;i++)	arr[i] += plus;
	if(plus>0)		for(int i=0;i<N;i++)	printf("%d ",arr[i]);
	else			for(int i=N-1;i>=0;i--)	printf("%d ",arr[i]);
}
