#include<cstdio>
int main()
{
	int a[3];
	for(int i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<3;i++)
	{
		for(int j=i;j<3;j++)
		{
			if(a[i]>a[j])
			{
				int k=a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		printf("%d ",a[i]);
	}	
	
}
