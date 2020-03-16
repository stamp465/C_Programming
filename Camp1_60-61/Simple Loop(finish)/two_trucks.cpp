#include<cstdio>
int main()
{
	int N;
	scanf("%d",&N);
	int arr[N],T1=20000,T2=20000;
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<N;i++)
	{
		if(T1>=arr[i])
		{
			T1-=arr[i];
			printf("1\n");
		}
		else if(T2>=arr[i])
		{
			T2-=arr[i];
			printf("2\n");
		}
		else	printf("0\n");
	}
}
