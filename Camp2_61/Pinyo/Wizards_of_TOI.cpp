#include<bits/stdc++.h>
using namespace std;

pair<int,int> A[4000],B[4000],C[4000],D[4000];


int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)	scanf("%d %d",&A[i].first,&A[i].second);
	for(int i=0;i<N;i++)	scanf("%d %d",&B[i].first,&B[i].second);
	for(int i=0;i<N;i++)	scanf("%d %d",&C[i].first,&C[i].second);
	for(int i=0;i<N;i++)	scanf("%d %d",&D[i].first,&D[i].second);
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			for(int k=0;k<N;k++)
			{
				for(int l=0;l<N;l++)
				{
					if(x==A[i].first+B[j].first+C[k].first+D[l].first&&y==A[i].second+B[j].second+C[k].second+D[l].second)
					{
						printf("%d %d\n",A[i].first,A[i].second);
						printf("%d %d\n",B[j].first,B[j].second);
						printf("%d %d\n",C[k].first,C[k].second);
						printf("%d %d\n",D[l].first,D[l].second);
					}
				}
			}
		}
	}
	
}
