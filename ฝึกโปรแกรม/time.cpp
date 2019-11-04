#include<stdio.h>
int main()
{
	int a,b,x,c;
	scanf("%d",&x);
	for(a=x;a>=0;a--)
	{
		for(b=x;b>a;b--)
		{
				printf(" ");
		}
		for(b=1;b<a+1;b++)
		{
				printf("%d",b);
		}
		
		printf("\n");
	}
}
