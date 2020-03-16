#include<stdio.h>
#include<cmath>
using namespace :: std;
int main()
{
	int N,arr[8],dis=10000000,num;
	scanf("%d",&N);
	for(int i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
		if(i==0)	num=arr[i];
		if(abs(N-arr[i])<dis)
		{
			num = arr[i];
			dis = abs(N-arr[i]);
		}
	}
	printf("%d",num);
}
