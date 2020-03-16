#include<cstdio>
int main()
{
	int N,count=0;
	scanf("%d",&N);
	while(1)
	{
		int a;
		scanf("%d",&a);
		if(a==0)	break;
		else
		{
			if(a==N)	count++;
		}
	}
	if(count==0)	printf("None");
	else	printf("%d",count);
}
