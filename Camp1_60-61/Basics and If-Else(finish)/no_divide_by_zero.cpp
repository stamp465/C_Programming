#include<cstdio>
int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(c==0)
	{
		printf("cannot divide by zero");
	}
	else
	{
		printf("%.6lf",(a+b)/c);
	}
}
