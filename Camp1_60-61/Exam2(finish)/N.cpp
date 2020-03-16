#include<cstdio>
int arr[701][701];
int main()
{
	int N;
	scanf("%d",&N);
	int a=N,c=N+1,e=N+N-1;
	for(int i=1;i<=N;i++,a--)
	{
		arr[i][1] = a%10; 
		if(a%10==0)	arr[i][1] = -1;
	}
	for(int i=2,j=2;i<N&&j<N;i++,j++,c++)
	{
		arr[i][j] = c%10;
		if(c%10==0)	arr[i][j] = -1;
	}
	for(int i=N;i>=1;i--,e++)
	{
		arr[i][N] = e%10;
		if(e%10==0)	arr[i][N] = -1;
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<N*2;j++)
		{
			if(j%2==0)	printf(" ");
			else
			{
				if(arr[i][(j+1)/2]==-1)	printf("0");
				else if(arr[i][(j+1)/2]==0)	printf(" ");
				else printf("%d",arr[i][(j+1)/2]);
			}
			
		}
		printf("\n");
	}
}
