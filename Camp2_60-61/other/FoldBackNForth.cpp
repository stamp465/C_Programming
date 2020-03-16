#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int c1[4] = {0,0,1,-1};
int c2[4] = {1,-1,0,0};
bool check(int x,int y,int N){
    for(int i=0;i<4;i++){
        if(x+c1[i]>=1&&x+c1[i]<=N&&y+c2[i]>=1&&y+c2[i]<=N){
            //cout << x+c1[i] << " " << y+c2[i] << endl;
            if(arr[x+c1[i]][y+c2[i]]==0){
                return true;
            }
        }
    }
    return false;
}


int main()
{
    int N;
    scanf("%d",&N);
    int a=1,savei=1,savej=1,countt=1;
    while(1){
        if(a==1){
            int j;
            for(j=0;j<=N;j++){
                if(arr[savei][savej+j]!=0)  break;
                if(savej+j>N)   break;
                if(arr[savei][savej+j]==0){
                    arr[savei][savej+j]=countt;
                    countt++;
                }
            }
            savei++;
            savej = savej+j-1;
            a=2;
        }
        else if(a==2){
            int j;
            for(j=0;j<=N;j++){
                if(arr[savei][savej-j]!=0)  break;
                if(savej-j<1)   break;
                if(arr[savei][savej-j]==0){
                    arr[savei][savej-j]=countt;
                    countt++;
                }
            }
            savei++;
            savej = savej-j+1;
            a=3;
        }
        else if(a==3){
            int i;
            //cout << savei << " " << savej << endl;
            for(i=0;i<=N;i++){
                if(arr[savei+i][savej]!=0)  break;
                if(savei+i>N)   break;
                if(arr[savei+i][savej]==0){
                    arr[savei+i][savej]=countt;
                    countt++;
                }
            }
            savei = savei+i-1;
            savej++;
            //cout << savei << " " << savej << endl;
            a=4;
        }
        else if(a==4){
            //cout << "go";
            int i;
            for(i=0;i<=N;i++){
                if(arr[savei-i][savej]!=0)  break;
                if(savei-i<1)   break;
                if(arr[savei-i][savej]==0){
                    arr[savei-i][savej]=countt;
                    countt++;
                }
            }
            savei = savei-i+1;
            savej++;
            a=1;
        }
        if(check(savei,savej,N)==false) break;
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            printf("%d ",arr[i][j]%10);
        }
        printf("\n");
    }
}
