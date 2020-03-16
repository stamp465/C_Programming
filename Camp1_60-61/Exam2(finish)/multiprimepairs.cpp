#include<cstdio>
int check_prime[100010];
int check_time[100010];
int main()
{
	for(int i=2;i<50000;i++)
	{
		if(check_prime[i]==0)
		{
			for(int j=i+i;j<50000;j+=i)
			{
				check_prime[j] = 1;
			}
			for(int j=2;j<i;j++)
			{
				if(check_prime[j]==0)
				{
					if(i*j<=100005)	check_time[i*j] = 1;
					else	break;
				}
			}
		}
	}
	
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
		int N;
		scanf("%d",&N);
		for(int i=N;i<=100005;i++)
		{
			if(check_time[i]==1)	
			{
				printf("%d\n",i);
				break;
			}
		}
		
	}
}
