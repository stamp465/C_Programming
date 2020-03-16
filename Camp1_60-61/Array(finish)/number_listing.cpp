#include<cstdio>
int main()
{
	int N;
	scanf("%d",&N);
	int arr[N];
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<N;i++)
	{
		for(int j=i;j<N;j++)
		{
			if(arr[i]>arr[j])
			{
				int k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
			}
		}
	}
	for(int i=0;i<N;i++)
	{
		bool check = true;
		if(i>0)
		for(int j=i-1;j>=0;j--)
		{
			if(arr[j]==arr[i])
			{
				check = false;
				break;
			}
		}
		if(check==true)	printf("%d ",arr[i]);
	}
}
