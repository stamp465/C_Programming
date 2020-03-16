#include<cstdio>
int main()
{
	int N,i=0,arr[100000],countall=0,countre=0,countremax=0;
	scanf("%d",&N);
	while(1)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==0)	break;
		if(i!=0&&arr[i-1]==N&&arr[i]==N)
		{
				countre++;
		}
		else if(arr[i]==N)	
		{
			countre++;
		}
		if(arr[i]==N)	countall++;	
		if(arr[i]!=N&&countre>0)	countre = 0;
		if(countre>countremax)	countremax = countre;
		i++;
	}
	printf("%d\n%d",countremax,countall);
}
