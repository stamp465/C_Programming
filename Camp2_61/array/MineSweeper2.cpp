#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int main()
{
	int N,M;
	cin >> N >> M;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++){
			cin >> arr[i][j];
		}
	}
	int A;
	cin >> A;
	while(A--){
		int x,y;
		cin >> x >> y;
		if(arr[x][y]==1)	cout << "YES" << endl;
		else{
			int countt=0;
			cout << "NO " ;
			for(int i=-1;i<=1;i++){
				for(int j=-1;j<=1;j++){
					if(arr[x+i][y+j]==1){
						countt++;
					}
				}
			}
			cout << countt << endl;
		}
	}
}
