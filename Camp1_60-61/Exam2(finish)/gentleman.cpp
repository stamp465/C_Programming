#include<cstdio>
int main()
{
	int N,count=0;
	scanf("%d",&N);
	char sex[N+1];
	scanf("%s",sex);
	//for(int i=0;i<N;i++)	printf("%c",sex[i]);
	for(int i=0;i<=N;i++)
	{
		int check=0;
		for(int j=0;j<=N;j++)
		{
			if(sex[j]=='M'&&sex[j+1]=='F')
			{
				sex[j+1] = 'M';
				sex[j] = 'F';
				check++;
				j++;
			}
		}
		if(check>0)	count++;
		check=0;
	}
	printf("%d",count);
}
