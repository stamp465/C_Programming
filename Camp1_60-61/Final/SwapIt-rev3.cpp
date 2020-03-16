#include<cstdio>
int main()
{
	int arr[10][10];
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			arr[i][j] = 0;
	for(int i=1;i<=8;i++)
		for(int j=1;j<=8;j++)
			scanf("%d",&arr[i][j]);
	 int n;
	 scanf("%d",&n);
	 for(int i=0;i<n;i++)
	 {
	 	int x,y,z,H=1,V=1;
	 	scanf("%d %d %d",&x,&y,&z);
	 	if(z==1)
	 	{
	 		if(y-1>0)
	 		{
	 			int k = arr[y][x];
	 			arr[y][x] = arr[y-1][x];
	 			arr[y-1][x] = k;
			}
		}
		else if(z==2)
		{
			if(x+1<9)
			{
				int k = arr[y][x];
				arr[y][x] = arr[y][x+1];
				arr[y][x+1] = k;
			}
		}
		else if(z==3)
		{
			if(y+1<9)
	 		{
	 			int k = arr[y][x];
	 			arr[y][x] = arr[y+1][x];
	 			arr[y+1][x] = k;
			}
		}
		else if(z==0)
		{
			if(x-1>0)
			{
				int k = arr[y][x];
				arr[y][x] = arr[y][x-1];
				arr[y][x-1] = k;
			}
		}
		int cV=0;
		for(int i=y+1;i<=8;i++)
		{
			//printf("%d ",arr[i][x]);
			if(arr[i][x]==arr[y][x]&&cV==0)	V++;
			if(arr[i][x]!=arr[y][x])	cV=1;
		}
		cV = 0;
		for(int i=y-1;i>=1;i--)
		{
			//printf("-%d ",arr[i][x]);
			if(arr[i][x]==arr[y][x]&&cV==0)	V++;
			if(arr[i][x]!=arr[y][x])	cV=1;
		}
		int cH=0;
		for(int i=x+1;i<=8;i++)
		{
			if(arr[y][i]==arr[y][x]&&cH==0)	H++;
			if(arr[y][i]!=arr[y][x])	cH=1;
		}
		cH=0;
		for(int i=x-1;i>=1;i--)
		{
			if(arr[y][i]==arr[y][x]&&cH==0)	H++;
			if(arr[y][i]!=arr[y][x])	cH=1;
		}
		printf("H %d V %d\n",H,V);
	 }
	/*for(int i=1;i<=8;i++)
	{
		for(int j=1;j<=8;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}*/
}
