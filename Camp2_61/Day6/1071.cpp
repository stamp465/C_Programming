#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];

int main()
{
    int N,M,cN=0;
    cin >> N >> M;
    for(int i=0;i<N;i++)
    {
        int x,y;
        cin >> x >> y;
        arr[x][y] = 1;
        cN++;
    }
    for(int i=0;i<M;i++)
    {
        int x,y,r,countt=0;
        cin >> x >> y >> r;
        if(cN==0){}
        else
        for(int i=x-r;i<=x+r;i++)
        {
            if(i>=0&&i<1000)
            for(int j=y-r;j<=y+r;j++)
            {
                //cout << arr[i][j];
                if(j>=0&&j<1000)
                if(arr[i][j]==1){
                    arr[i][j] = 0;
                    countt++;
                    cN--;
                }
            }
        }
        cout << countt << endl;
    }
}
