#include<cstdio>
int main()
{
	int N,oddsum=0,evensum=0;
	for(int i=0;i<8;i++)
	{
		scanf("%d",&N);
		if(N%2==0)	evensum+=N;
		else	oddsum+=N;
	}
	if(evensum==oddsum)	printf("equal\n");
	else if(evensum>oddsum)	printf("even\n");
	else	printf("odd\n");
	printf("%d\n%d",evensum,oddsum);
}
