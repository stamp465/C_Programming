#include<cstdio>
int main()
{
	int ID_V[3],T[3],V[3];
	for(int i=0;i<3;i++)
	{
		scanf("%d %d %d",&ID_V[i],&T[i],&V[i]);
	}
	int N,K,sum=0,sum_use=0,stamp=0;
	scanf("%d %d",&N,&K);
	for(int i=0;i<N;i++)
	{
		int ID,C,check=0;
		scanf("%d %d",&ID,&C);
		for(int i=0;i<3;i++)
		{
			if(ID==ID_V[i]&&T[i]==1)
			{
				check=1;
				stamp += V[i];
				break;
			}
			if(ID==ID_V[i]&&T[i]==2)
			{
				check=1;
				C -= V[i];
			}
		}
		sum += C;
		if(check==0)	sum_use += C;
	}
	printf("%d\n",sum);
	printf("%d\n",sum_use);
	printf("%d\n",stamp+(sum_use/K));
}
