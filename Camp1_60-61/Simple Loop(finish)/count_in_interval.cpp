#include<cstdio>
int main()
{
	int a,b,count=0,arr[8];
	scanf("%d %d",&a,&b);
	for(int i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
		if(a<b)
		{
			if(a<=arr[i]&&arr[i]<=b)	count++;
		}
		else if(a>b)
		{
			if(a>=arr[i]&&arr[i]>=b)	count++;
		}
	}
	if(count==0)	printf("None");
	else	printf("%d",count);
}
