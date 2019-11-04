#include<stdio.h>
#define max 100
int main()
{
	int a,b,c,odd,even,d[max],e[max],p=0,*q,r=0,*s;
	d[0] = 0;
	scanf("%d",&a);
	for(int i =1;i<=a;i++)
	{
		scanf("%d",&d[i]);
	}
	for(int i =1;i<=a;i++)
	{
		printf("%d ",d[i]);
	}
	printf("\n");
	for(int i =1;i<=a;i++)
	{
		e[i] = d[i];
	}
	for(int i =1;i<=a;i++) //sum
	{
		q = &d[i];
		if(i%2==1) 			//even
		{
			p = p + *q;
		}
		else if(i%2==0) 	//odd
		{
			r = r + *q;
		}
	
	}
	printf("\n%d ",r); //odd
	printf("\n%d ",p); //even
	printf("\n%d ",r-p); //sum
}
