#include<bits/stdc++.h>
using namespace std;
int nub[1000000];
int arr[1000][1000];
int N,M;

int floodfill(int i,int j,int countt){
    nub[countt*-1]++;
    arr[i][j] = countt;
    if(arr[i+1][j]==0&&i+1<N)  floodfill(i+1,j,countt);
    if(arr[i-1][j]==0&&i-1>=0)  floodfill(i-1,j,countt);
    if(arr[i][j+1]==0&&j+1<M)  floodfill(i,j+1,countt);
    if(arr[i][j-1]==0&&j-1>=0)  floodfill(i,j-1,countt);
}

int main()
{

    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int a,st=0,sti,stj,countt=0;
    if(N>M) a = (M/2)+(M%2);
    else    a = (N/2)+(N%2);
    while(1){
        if(st>a)    break;
        sti=st;
        stj=st;
        for(stj;stj<M-st;stj++){
            //cout << stj << endl;
            if(arr[sti][stj]==0){
                countt--;
                floodfill(sti,stj,countt);
            }
        }
        stj--;
        //cout << sti <<stj << endl;
        for(sti;sti<N-st;sti++){
            //cout << sti << endl;
            if(arr[sti][stj]==0){
                countt--;
                floodfill(sti,stj,countt);
            }
        }
        sti--;
        //cout << sti <<stj << endl;
        for(stj;stj>0+st;stj--){
            //cout << stj << endl;
            if(arr[sti][stj]==0){
                countt--;
                floodfill(sti,stj,countt);
            }
        }
        //cout << sti <<stj << endl;
        for(sti;sti>0+st;sti--){
            //cout << sti << endl;
            if(arr[sti][stj]==0){
                countt--;
                floodfill(sti,stj,countt);
            }
        }
        //cout << sti <<stj << endl;
        st++;
    }
    //printf("%d %d\n",countt*-1,nub[countt*-1]);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
