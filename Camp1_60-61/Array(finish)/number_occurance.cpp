#include<cstdio>
int main()
{
	int N;
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	int want,count=0;
	scanf("%d",&want);
	for(int i=0;i<N;i++)
	{
		if(arr[i]==want)
		{
			printf("%d ",i+1);
			count = 1;
		}
	}
	if(count==0)	printf("0");
}
