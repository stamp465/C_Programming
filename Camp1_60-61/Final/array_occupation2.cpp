#include<cstdio>

int main()
{
	int N,K;
	int arr[100005];
	for(int i=0;i<100005;i++)	arr[i] = 0;
	scanf("%d %d",&N,&K);
	for(int i=0;i<K;i++)
	{
		int c;
		scanf("%d",&c);
		if(c>=1&&c<=N)	arr[c]++;
	}
	int c_max=0,count=0;
	for(int i=1;i<=N;i++)
	{
		if(arr[i]==0)	count++;
		if(count>c_max)	c_max = count;
		if(arr[i]!=0)	count = 0;
	}
	printf("%d\n",c_max);
	int check_count=0;
	for(int i=1;i<=N;i++)
	{
		if(arr[i]==0)	
		{
			check_count++;
			if(check_count==c_max)
				printf("%d ",i);
		}
		else
		{
			check_count = 0;
		}
	}
}
