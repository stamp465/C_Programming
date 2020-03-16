#include<cstdio>
int W[1000],D[1000],L[1000],Old[1000],Now[1000],Mes[1000];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<39;j++){
			char S;
			scanf("%c",&S);
			if(S=='W')
			{
				W[i]++;
				Old[i]+=2;
				Now[i]+=3;
				Mes[i]+=5;
			}
			else if(S=='D')
			{
				D[i]++;
				Old[i]+=1;
				Now[i]+=1;
				Mes[i]+=1;
			}
			else if(S=='L')
			{
				L[i]++;
				Old[i]+=0;
				Now[i]+=0;
				Mes[i]-=1;
			}
		}
	}
	for(int i=0;i<N;i++)
	{
		printf("%d %d %d %d %d %d\n",W[i],D[i],L[i],Old[i],Now[i],Mes[i]);
	}
	
}
