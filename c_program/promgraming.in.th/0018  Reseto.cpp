#include<stdio.h>
#include<string.h>
#include<math.h>

int check[1000];

int main()
{
	int N,K,b=0;
	scanf("%d %d",&N,&K);
	int count=0;
	for(int i=2;i<=N;i++)
	{
		for(int j=i;j<=N;j+=i)
		{
			if(check[j]==0)
			{
				count++;
				check[j] = 1;
				if(count == K)
				{
					//printf("|||%d|||",count);
					printf("%d",j);
					b=1;
					break;
				}
			}
		}
		if(b==1)	break;
	}
	
	
}
