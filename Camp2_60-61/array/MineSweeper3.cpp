#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int out[1000][1000];
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
	for(int x=1;x<=N;x++){
		for(int y=1;y<=M;y++){
			if(arr[x][y]==1)	out[x][y] = -1;
			else{
				int countt=0;
				for(int i=-1;i<=1;i++){
					for(int j=-1;j<=1;j++){
						if(arr[x+i][y+j]==1){
							countt++;
						}
					}
				}
				out[x][y] = countt;
			}
		}
	}
	for(int x=1;x<=N;x++){
		for(int y=1;y<=M;y++){
			if(out[x][y]==-1)	cout << "* ";
			else	cout << out[x][y] << " ";
		}
		cout << endl;
	}
}
