#include<stdio.h>
#define max 3
int main()
{
	int arr[max];
	int i,j;
	for(i=0;i<3;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	if(arr[0]>arr[1]&&arr[1]>arr[2])
	printf("%d %d %d",arr[0],arr[1],arr[2]);
	
	else if(arr[0]>arr[2]&&arr[2]>arr[1])
	printf("%d %d %d",arr[0],arr[2],arr[1]);
	
	else if(arr[1]>arr[0]&&arr[0]>arr[2])
	printf("%d %d %d",arr[1],arr[0],arr[2]);
	
	else if(arr[1]>arr[2]&&arr[2]>arr[0])
	printf("%d %d %d",arr[1],arr[2],arr[0]);
	
	else if(arr[2]>arr[1]&&arr[1]>arr[0])
	printf("%d %d %d",arr[2],arr[1],arr[0]);
	
	else if(arr[2]>arr[0]&&arr[0]>arr[1])
	printf("%d %d %d",arr[2],arr[0],arr[1]);
	
	
}
