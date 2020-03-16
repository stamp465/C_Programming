#include<cstdio>
int arr[1000000];
int main()
{
	int count=1,countmax=1;
	int re;
	for(int i=0;i<1000000;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==0)	break;
		if(i==0)	re = arr[i];
		else{
			if(i!=0)
			{
				if(arr[i-1]==arr[i])
				{
					count++;
					if(count>countmax)
					{
						countmax = count;
						re = arr[i];
					}
				}
				else count=1;
			}
		}
	}
	printf("%d\n%d",countmax,re);
}
