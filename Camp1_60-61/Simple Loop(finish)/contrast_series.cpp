#include<cstdio>
int main()
{
	long long int M,N,sum=0,i,j,a=3,b=1;
	scanf("%lld %lld",&M,&N);
	for(i=3,j=1;i<=M&&j<=N;i=(a+b),j=(a-b),a=i,b=j)
	{
		sum += (i*j);
	}
	printf("%d",sum);
}
