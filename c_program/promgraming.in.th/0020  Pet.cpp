#include<stdio.h>
#include<string.h>
#include<math.h>


int sum[5];

int main()
{
	int arr[5][4],max=-1000;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		for(int j=0;j<4;j++)
		{
			sum[i] += arr[i][j];
		}
		if(max<sum[i])	max=sum[i];
	}
	for(int i=0;i<5;i++)
	{
		if(sum[i]==max)	printf("%d ",i+1);
	}
	printf("%d",max);
	

	
}
