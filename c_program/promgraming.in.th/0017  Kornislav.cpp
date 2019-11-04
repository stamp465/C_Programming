#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int N[4];
	for(int i=0;i<4;i++)
		scanf("%d",&N[i]);
	
	for(int i=0;i<4;i++)
	{
		for(int j=i;j<4;j++)
		{
			if(N[i]>N[j])
			{
				int k = N[i];
				N[i] = N[j];
				N[j] = k;
			}
			
		}
	}
	
	if((N[0]*N[2])<=(N[1]*N[3]))
	{
		printf("%d",N[0]*N[2]);
	}
	else
		printf("%d",N[1]*N[3]);
}
