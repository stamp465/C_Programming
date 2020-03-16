#include<cstdio>
int main()
{
	int size1[3] = {15,10,8};
	int size2[3] = {25,15,12};
	int size3[3] = {50,40,20};
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(size1[0]>=a&&size1[1]>=b&&size1[2]>=c)		printf("1\n%d",(size1[0]*size1[1]*size1[2])-(a*b*c));
	else if(size2[0]>=a&&size2[1]>=b&&size2[2]>=c)	printf("2\n%d",(size2[0]*size2[1]*size2[2])-(a*b*c));
	else if(size3[0]>=a&&size3[1]>=b&&size3[2]>=c)	printf("3\n%d",(size3[0]*size3[1]*size3[2])-(a*b*c));
	else
	{
		printf("Oversize product\n");
		if((size3[0]*size3[1]*size3[2])-(a*b*c)>=0)	printf("%d",(-1)*((size3[0]*size3[1]*size3[2])-(a*b*c)));
		else	printf("%d",(a*b*c)-(size3[0]*size3[1]*size3[2]));
	}
}
