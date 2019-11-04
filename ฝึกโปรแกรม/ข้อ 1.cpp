#include<stdio.h>
int scan();
int dd(int);
int sum(int);
int print(int);
int main()
{
	int a,b,c;
	a = scan();
	b = sum(a);
	print(b);
	
}
int scan()
{
	int x;
	scanf("%d",&x);
	return (x);
}
int dd(int a,int b)
{
	b = b*a;
}
int sum(int a)
{
	int i,j=a;
	for(i=1;i<a;i++)
	{
		j = dd(a,j);
	}
	return (j);
}
int print(int z)
{
	printf("%d",z);
}

