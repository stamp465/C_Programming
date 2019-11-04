#include<bits/stdc++.h>
using namespace std;
int x[4] = {0,0,1,-1};
int y[4] = {1,-1,0,0};
int arr[1000][1000];
int dis = 1000000;
vector<int> vec;
int floodfill(int i,int j,int N,int M,int countt) {
	arr[i][j] = countt;
	for(int k=0; k<4; k++) {
		if(i+x[k]>0&&i+x[k]<=N&&j+y[k]>0&&j+y[k]<=M&&arr[i+x[k]][j+y[k]]==1) {
			floodfill(i+x[k],j+y[k],N,M,countt);
		}
	}
}
/*
int checkconnect(int num)
{
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			if(arr[i][j]==1) {
				countt++;
				//cout << "fill";
				floodfill(i,j,N,M,countt);
			}
		}
	}
}*/

int main() {
	int N,M,startx,starty,endx,endy;
	scanf("%d %d",&N,&M);
	scanf("%d %d",&startx,&starty);
	scanf("%d %d",&endx,&endy);
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	int countt=1;
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			if(arr[i][j]==1) {
				countt++;
				//cout << "fill";
				floodfill(i,j,N,M,countt);
			}
		}
	}
	int can = 0;
	int chst = arr[startx][starty];
	//vec.push_back(chst);
	int chen = arr[endx][endy];
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			int can1 = 0,can2 = 0;
			if(arr[i][j]==0)
				for(int k=0; k<4; k++) {
					if(i+x[k]>0&&i+x[k]<=N&&j+y[k]>0&&j+y[k]<=M&&arr[i+x[k]][j+y[k]]==chst) {
						can1 = 1;
					}
					if(i+x[k]>0&&i+x[k]<=N&&j+y[k]>0&&j+y[k]<=M&&arr[i+x[k]][j+y[k]]==chen) {
						can2 = 1;
					}
					if(can1==1&&can2==1) {
						break;
					}
				}
			if(can1==1&&can2==1) {
				arr[i][j] = -1;
				can++;
			}
			//cout << arr[i][j] << " ";
		}
		//cout << endl;
	}
	cout << can << endl;
	countt = 1;
	arr[startx][starty] = -2;
	while(1) {
		for(int i=1; i<=N; i++)
			for(int j=1; j<=M; j++) {
				if(arr[i][j]==-2) {
					arr[i][j] = -1;
					for(int k=0; k<4; k++) {
						if(i+x[k]>0&&i+x[k]<=N&&j+y[k]>0&&j+y[k]<=M&&arr[i+x[k]][j+y[k]]!=0) {
							if(i+x[k]==endx&&j+y[k]==endy) {
								countt++;
								cout << countt;
								return 0;
							} else {
								arr[i+x[k]][j+y[k]] = -3;
							}
							//if(f[aa+i][j+bb]!='X'&&f[aa+i][j+bb]!='q'&&f[aa+i][j+bb]!='*')    f[aa+i][j+bb] = 's';
						}
					}
				}
			}
		for(int i=1; i<=N; i++)
			for(int j=1; j<=M; j++)
				if(arr[i][j]==-3)    arr[i][j] = -2;

		/*for(int i=0;i<x;i++){
		    for(int j=0;j<y;j++)
		    {
		        cout << f[i][j] ;
		    }
		    cout << endl;
		}
		cout << endl;*/
		countt++;

	}

}
