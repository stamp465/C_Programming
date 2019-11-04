#include<bits/stdc++.h>
using namespace std;
int maxx=0;
int main()
{
	int x,y,N;
	cin >> x >> y >> N ;
	int arr[y] = {0};
	int arr2[x] = {0};
	for(int i=0;i<N;i++)
	{
		int ix,iy,longg;
		cin >> ix >> iy >> longg;
		for(int j=-1*longg;j<=longg;j++)
		{
			if(iy+j>=0&&iy+j<y)	arr[iy+j]++;
			if(ix+j>=0&&ix+j<x)	arr2[ix+j]++;
		}
	}
	for(int i=0;i<y;i++)
	{
		//cout << arr[i] << " ";
		if(arr[i]>maxx)	maxx = arr[i];
	}
	for(int i=0;i<x;i++)
	{
		//cout << arr[i] << " ";
		if(arr2[i]>maxx)	maxx = arr2[i];
	}
	cout << maxx;
}
