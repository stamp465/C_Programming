#include<stdio.h>
int main()
{
	long long int a,b;
	scanf("%lld %lld",&a,&b);
	while(b != 0)
	{
		int c = b;
		b = a%b;
		a = c;
	}
	printf("%lld",a);
}
