#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int floodfill(int x,int y){
    arr[x][y] = 0;
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(arr[x+i][y+j]==1)    floodfill(x+i,y+j);
        }
    }
}


int main()
{
    int N;  cin >> N;
    for(int i=0;i<N;i++)
    {
        int x,y,countt=0;    cin >> x >> y;
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(arr[i][j]==1){
                    countt++;
                    floodfill(i,j);
                }
            }
        }
        cout << countt << endl;

    }
}
