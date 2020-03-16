#include<cstdio>
int main()
{
	int N,max,min;
	for(int i=0;i<8;i++)
	{
		scanf("%d",&N);
		if(i==0)
		{
			max = N;
			min = 100000000;
		}
		else
		{
			if(N>max)	max = N;
			if(N<min&&N>0)	min = N;
		}
	}
	printf("%d\n%d",max,min);
	
}
