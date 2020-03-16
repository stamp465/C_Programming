#include<cstdio>
int main()
{
	int water,sugar,count=0;
	for(int i=0;i<7;i++)
	{
		count = 0;
		scanf("%d %d",&water,&sugar);
		while(water>=250&&sugar>=15)
		{
			water-=250;
			sugar-=15;
			count++;
		}
		printf("%d",count);
		if(water>0)	printf(" water");
		printf("\n");
	}
}
