#include<cstdio>
int main()
{
	double w,h,c;
	scanf("%lf %lf",&w,&h);
	if(w<=0||h<=0)
	{
		if(w<=0&&h<=0) printf("invalid width and height");
		else if(w<=0)	printf("invalid width");
		else if(h<=0)	printf("invalid height");
	}
	else
	{
		printf("%.2lf",w*h);
	}
}
