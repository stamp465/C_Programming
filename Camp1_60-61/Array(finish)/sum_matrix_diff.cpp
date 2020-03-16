#include<cstdio>
#include<cmath>
using namespace :: std;
int main()
{
	int N;
	scanf("%d",&N);
	int arr[N+1][N+1];
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int sum = 0;
	for(int i=1;i<N;i++)
	{
		for(int j=i+1;j<=N;j++)
		{
			//printf("%d ",arr[i][j]);
			sum += abs(arr[i][j]-arr[j][i]);
		}
	}
	printf("%d",sum);
}
