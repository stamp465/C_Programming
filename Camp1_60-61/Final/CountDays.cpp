#include<cstdio>
int main()
{
	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int d1,m1,d2,m2,day=0;
	scanf("%d %d %d %d",&d1,&m1,&d2,&m2);
	if(m1==m2&&d1>d2)		printf("error");
	else if((d1>month[m1])||(d2>month[m2])||(d1<1)||(d2<1)||(m1<1)||(m2<1)||(m1>12)||(m2>12))	printf("error");
	else if(m1>m2)			printf("error");
	else
	{
		if(m1==m2)			day += d2-d1+1;
		else
		{
			for(int i=m1+1;i<=m2-1;i++)
			{
				day += month[i];
			}
			day += month[m1] - d1 + 1;
			day += d2;
		}
		printf("%d",day);
	}
}
