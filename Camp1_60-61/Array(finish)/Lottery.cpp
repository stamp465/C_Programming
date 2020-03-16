#include<cstdio>
int arr[50000],mem[50000];
int main()
{
	int N,count=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	int K,arrK,m=0;
	scanf("%d",&K);
	for(int i=0;i<K;i++)
	{
		scanf("%d",&arrK);
		for(int j=0;j<N;j++)
		{
			if(arr[j]%1000==arrK)
			{
				bool check = true;
				for(int k=0;k<m;k++)
				{
					if(mem[k]==arr[j])	check = false;
				}
				if(check==true)
				{
					count++;
					mem[m] = arr[j];
				}
			}
		}
	}
	printf("%d",count);
	
}
