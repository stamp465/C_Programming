#include<cstdio>

int main()
{
	int N,K;
	int arr[100005];
	for(int i=0;i<100005;i++)	arr[i] = 0;
	scanf("%d %d",&N,&K);
	int c_sus=0,c_out=0,c_x=0,max=0;
	for(int i=0;i<K;i++)
	{
		int c;
		scanf("%d",&c);
		if(c>=1&&c<=N)
		{
			if(arr[c]==0)
			{
				c_sus++;
			}
			else
			{
				c_x++;
			}
			arr[c]++;
			if(arr[c]>max)	max = arr[c];
		}
		else
		{
			c_out++;
		}
	}
	printf("%d\n%d\n%d\n",c_sus,c_out,c_x);
	for(int i=1;i<=N;i++)
	{
		if(arr[i]==max)	printf("%d ",i);
	}
}
