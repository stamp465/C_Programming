#include<stdio.h>
int main()
{
	long long int a,b,z,x,w;
	scanf("%lld %lld",&a,&b);
	z = a;x=b;
	while(b != 0)
	{
		int c = b;
		b = a%b;
		a = c;
	}
	w = z*(x/a);
	printf("%lld",w);
}
