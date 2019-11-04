#include<bits/stdc++.h>
using namespace std;
int countt = 0;
int x[4] = {0,0,1,-1};
int y[4] = {1,-1,0,0};
int arr[500][500];

int color(int i,int j,int coo,int N,int M){
    arr[i][j] = coo;
	for(int k=0; k<4; k++) {
		if(i+x[k]>0&&i+x[k]<=N&&j+y[k]>0&&j+y[k]<=M&&arr[i+x[k]][j+y[k]]==1) {
			color(i+x[k],j+y[k],coo,N,M);
		}
	}
}
int connect(int N,int M){
    int can=0;
    for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
            int can1 = 0,can2 = 0;
            if(arr[i][j]==0)
			for(int k=0; k<4; k++) {
					if(i+x[k]>0&&i+x[k]<=N&&j+y[k]>0&&j+y[k]<=M&&arr[i+x[k]][j+y[k]]==2) {
						can1 = 1;
					}
					if(i+x[k]>0&&i+x[k]<=N&&j+y[k]>0&&j+y[k]<=M&&arr[i+x[k]][j+y[k]]==3) {
						can2 = 1;
					}
					if(can1==1&&can2==1) {
						break;
					}
				}
			if(can1==1&&can2==1) {
				arr[i][j] = 4;
				can++;
			}
		}
	}
	return can;
}

int main()
{
    int N,M;
    int stx,sty,enx,eny;
    scanf("%d %d %d %d %d %d",&N,&M,&stx,&sty,&enx,&eny);
    for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	color(stx,sty,2,N,M);
	color(enx,eny,3,N,M);
    int nub = connect(N,M);
    /*cout << endl;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }*/
	//cout << connect(N,M) << endl;
	//int arr[stx][sty] = -1;
	arr[stx][sty] = -1;
	arr[enx][eny] = 5;
	while(1){
        for(int i=1; i<=N; i++) {
            for(int j=1; j<=M; j++) {
                if(arr[i][j]==-2)   arr[i][j] = -1;
            }
        }
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++){
                if(arr[i][j]==-1){
                    for(int k=0; k<4; k++) {
                        if(i+x[k]>0&&i+x[k]<=N&&j+y[k]>0&&j+y[k]<=M&&arr[i+x[k]][j+y[k]]>1) {
                            if(arr[i+x[k]][j+y[k]]==5){
                                countt++;
                                printf("%d\n%d",nub,countt+1);
                                return 0;
                            }
                            arr[i+x[k]][j+y[k]] = -2;
                        }
                    }
                }
            }
        }
        countt++;
	}
    //
}
