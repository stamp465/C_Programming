#include<stdio.h>
#define max 10
int main()
{
	int i,j;
	int a[max];
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=4;j>=0;j--)
	{
		printf("%d\n",a[j]);
	}
}
