#include<stdio.h>
#define max 100000
int loop(long int x,long int y);
int main()
{
	long int a,c,d,e,x,y,u=0;   
	long int b[max],z[max],m[max];
	scanf("%ld",&a);
	for(e=1;e<=a;e++)
	{
		scanf("%ld",&b[e]);
	}
	for(e=1;e<=a;e++)
	{
		m[e] = b[e];
	}
	for(c=1;c<=a;c++)
	{
		d = loop(b[c],b[c+1]);
		b[c+1] = d;
	}	
	for(x=1;x<=a;x++)
	{
		z[x] = m[x]/d;
	}
	for(y=1;y<=a;y++)
	{
		u = u + z[y];
	}
	printf("%ld",u);

}
int loop(long int x,long int y)
{
	while(y != 0)
	{
		long int c = y;
		y = x%y;
		x = c;
	}
	return(x);
}

