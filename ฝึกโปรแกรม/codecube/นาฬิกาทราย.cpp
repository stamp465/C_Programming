#include<stdio.h>
int main()
{
	int a,space,line,i,j,count=0;
	scanf("%d",&a);
	if(a%2==0)
	printf("error");
	else
	{
		for(line=a;line>0;line=line-2)
		{
			count++;
			for(i=1;i<count;i++)
			{
				printf(" ");
			}
			for(i=line;i>0;i--)
			{
				printf("*");
			}
			printf("\n");
		}
		count=a/2;
		for(line=2;line<a;line=line+2)
		{
			count--;
			for(i=0;i<count;i++)
			{
				printf(" ");
			}
			for(i=0;i<=line;i++)
			{
				printf("*");
			}
			printf("\n");
		}
		
	}
}
