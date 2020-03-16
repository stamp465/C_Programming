#include<cstdio>
int main()
{
	int N;
	scanf("%d",&N);
	int arr[N+1];
	for(int i=N;i>0;i--)	scanf("%d",&arr[i]);
	for(int i=1;i<=N;i++)
	{
		for(int j=0;j<i;j++)
			printf("%d",arr[i]);
		printf("\n");
	}
}
