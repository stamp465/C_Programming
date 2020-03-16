#include<cstdio>
int main()
{
	int x,y,N,sum=0,check=0;
	scanf("%d %d",&x,&y);
	for(int i=0;i<8;i++)
	{
		scanf("%d",&N);
		if(N>=x&&y>=N)
		{
			check=1;
			sum+=N;
		}
	}
	if(check==0)	printf("None");
	else	printf("%d",sum);
}
