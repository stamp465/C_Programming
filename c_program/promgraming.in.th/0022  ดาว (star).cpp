#include<stdio.h>
#include<string.h>
#include<math.h>
int sum[5];
int main()
{
	
	int N;
	scanf("%d",&N);
	int xx=N/2;
	int NN = N;
	if(N%2==0)	
	{
		xx--;
		N--;
	}
	int f=N/2+1;
if(N==1||N==2)
{
	if(NN==1)
		printf("*");
	if(NN==2)
		printf("*\n*");
}
	
else{
	for(int i=1;i<=xx;i++)
	{
			for(int a=f-i;a>0;a--)
			{
				printf("-");
			}
			if(i==1||i==N)
			{
				printf("*");
			}
			else
			{
				int b = i-1;
				printf("*");
				for(int a=b*2-1;a>0;a--)
				{
					printf("-");
				}
				printf("*");
			}
			for(int a=f-i;a>0;a--)
			{
				printf("-");
			}
			
			printf("\n");
		
	}
	
	if(NN%2==0)
		{
			printf("*");
			for(int a=NN-3;a>0;a--)
			{
				printf("-");
			}
			printf("*");
			printf("\n");
		}
		
		printf("*");
		for(int a=N-2;a>0;a--)
		{
			printf("-");
		}
		printf("*");
		printf("\n");
	
	
	
	
	for(int i=xx;i>0;i--)
	{
			for(int a=f-i;a>0;a--)
			{
				printf("-");
			}
			if(i==1||i==N)
			{
				printf("*");
			}
			else
			{
				int b = i-1;
				printf("*");
				for(int a=b*2-1;a>0;a--)
				{
					printf("-");
				}
				printf("*");
			}
			for(int a=f-i;a>0;a--)
			{
				printf("-");
			}
			
			printf("\n");
	}
}

}
