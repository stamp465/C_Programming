#include<stdio.h>
int main()
{
	int count=0,num=0,n,m,c=0,d,i,j,k;
	int f[100],fn[100];
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		f[i] = i;
	}
	for(i=1;i<=n;i++)
	{
		printf("%d ",f[i]);
	}
	printf("\n");
	while(num<n)
	{
		count++;
		c++;
		if(count==m&&f[c]!=0)
		{
			num++;
			fn[num]=f[c];
			f[c]=0;
			count = 0;
		}
		else if(f[c]==0)
		{
			count--;
		}
		else if(c>=n)
		{
			c = 0;
		}
		
	}
	
	
	
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",fn[i]);
	}
}
