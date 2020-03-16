#include<cstdio>
int main()
{
	int N,max_gold=0,max_sil=0,max_cop=0,max_sum=0;
	scanf("%d",&N);
	struct{
		int ID;
		int gold;
		int sil;
		int cop;
		int sum;	
	}con[N];
	for(int i=0;i<N;i++)
	{
		scanf("%d",&con[i].ID);
		scanf("%d",&con[i].gold);
		scanf("%d",&con[i].sil);
		scanf("%d",&con[i].cop);
		con[i].sum = con[i].gold + con[i].sil + con[i].cop;
		if(con[i].gold>max_gold)	max_gold = con[i].gold;
		if(con[i].sil>max_sil)		max_sil = con[i].sil;
		if(con[i].cop>max_cop)		max_cop = con[i].cop;
		if(con[i].sum>max_sum)		max_sum = con[i].sum;
	}
	while(1)
	{
		int K;
		scanf("%d",&K);
		if(K<=0)
		{
			printf("good bye");
			break;
		}
		else if(K==1001)
		{
			for(int i=0;i<N;i++)
			{
				if(con[i].gold==max_gold)	printf("%d ",con[i].ID);
			}
			printf("\n");
		}
		else if(K==1002)
		{
			for(int i=0;i<N;i++)
			{
				if(con[i].sil==max_sil)	printf("%d ",con[i].ID);
			}
			printf("\n");
		}
		else if(K==1003)
		{
			for(int i=0;i<N;i++)
			{
				if(con[i].cop==max_cop)	printf("%d ",con[i].ID);
			}
			printf("\n");
		}
		else if(K==2000)
		{
			for(int i=0;i<N;i++)
			{
				if(con[i].sum==max_sum)	printf("%d ",con[i].ID);
			}
			printf("\n");
		}
		else if(K==3000)
		{
			for(int i=0;i<N;i++)
			{
				if(con[i].sum>0)	printf("%d ",con[i].ID);
			}
			printf("\n");
		}
		else
		{
			bool check = false;
			for(int i=0;i<N;i++)
			{
				if(con[i].ID==K)
				{
					check = true;
					printf("%d ",con[i].gold);
					printf("%d ",con[i].sil);
					printf("%d ",con[i].cop);
					printf("%d\n",con[i].sum);
				}
			}
			if(check==false)
			{
				printf("invalid code\n");
			}
		}
	}
	
}
