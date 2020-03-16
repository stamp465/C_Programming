#include<stdio.h>
int main()
{
	int a,b,sum=0,use=0,csum=0,cuse=0;
	while(1)
	{
		scanf("%d",&a);
		if(a==0)	break;
		scanf("%d",&b);
		if(a==1)	
		{
			csum+=1;
			sum+=b;
		}
		else if(a==2)	
		{
			cuse+=1;
			use+=b;
		}
	}
	printf("%d %d\n%d %d %d",csum,cuse,sum,use,sum-use);
}
