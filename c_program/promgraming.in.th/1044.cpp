#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int arr[n][m],plus[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin >> arr[i][j];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin >> plus[i][j];
	int arrx[n]={0},arry[m]={0},plusx[n]={0},plusy[m]={0},all=0,max=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++){
			all+=arr[i][j];
			arrx[i] += arr[i][j];
			arry[j] += arr[i][j];
			plusx[i] += plus[i][j];
			plusy[j] += plus[i][j];
		}
	/*for(int i=0;i<n;i++)
	{
		printf("%d ",arrx[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",plusx[i]);
	}
	printf("\n");
	for(int i=0;i<m;i++)
	{
		printf("%d ",arry[i]);
	}
	printf("\n");
	for(int i=0;i<m;i++)
	{
		printf("%d ",plusy[i]);
	}
	printf("\n");*/
	for(int i=0;i<n;i++)
	{
		int be=0,af=0;
		if(i-1>=0)	be = plusx[i-1];
		if(i+1<n)	af = plusx[i+1];
		if(max<(all+be+af-arrx[i]))	max = all+be+af-arrx[i];
	}
	for(int i=0;i<m;i++)
	{
		int be=0,af=0;
		if(i-1>=0)	be = plusy[i-1];
		if(i+1<m)	af = plusy[i+1];
		if(max<(all+be+af-arry[i]))	max = all+be+af-arry[i];
	}
	cout << max;
}
