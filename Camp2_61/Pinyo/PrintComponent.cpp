#include<bits/stdc++.h>
using namespace std;
int arr[2000][2000];
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};
int N,M,nup=0;
int coo[100000];
void go(int i,int j,int countt){
    nup++;
    arr[i][j] = countt;
    //cout << "go";
    for(int a=0;a<4;a++)
    {
        if(i+x[a]>=0&&i+x[a]<N&&j+y[a]>=0&&j+y[a]<M&&arr[i+x[a]][j+y[a]]==1)
        {
            go(i+x[a],j+y[a],countt);
        }

    }
}

int main()
{

    scanf("%d %d",&N,&M);
    //int arr[N][M];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int countt=1;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(arr[i][j]==1){
                countt++;
                nup = 0;
                go(i,j,countt);
                coo[countt] = nup;
            }
        }
    }
    /*for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }*/
    int O;
    scanf("%d",&O);
    while(O--){
        int a,b;
        scanf("%d %d",&a,&b);
        a--;    b--;
        if(arr[a][b]!=0){
            printf("%d\n",coo[arr[a][b]]);
            int startx=150000,starty=150000,endx=-150000,endy=-15000;
            for(int i=0;i<N;i++)
            {
                for(int j=0;j<=M;j++)
                {
                    if(arr[i][j]==arr[a][b]){
                        if(i<startx)    startx = i;
                        if(j<starty)    starty = j;
                        if(i>endx)      endx = i;
                        if(j>endy)      endy = j;
                    }

                }
            }
            //printf("%d %d %d %d\n",startx,endx,starty,endy);
            for(int i=startx;i<=endx;i++)
            {
                for(int j=starty;j<=endy;j++)
                {
                    if(arr[i][j]!=arr[a][b])    printf(" ");
                    else                        printf("*");
                }
                printf("\n");
            }
        }
        else{
            printf("-\n");
        }
    }
}
