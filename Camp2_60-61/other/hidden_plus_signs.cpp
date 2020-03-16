#include<bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int check[1000][1000];


int main()
{
    int Q;
    scanf("%d",&Q);
    for(int i=0;i<Q;i++){
        int countt=0,savei=0,savej=0;
        int N,M;
        scanf("%d %d",&N,&M);
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++){
                scanf("%d",&arr[i][j]);
                check[i][j] = arr[i][j];
            }
        }
        for(int i=2;i<N;i++){
            for(int j=2;j<M;j++){
                int have=0;
                if(arr[i][j]==1&&check[i][j]==1){
                    for(int k=1;k<=5;k++){
                        if(i+k>N||i-k<1||j+k>M||j-k<1)  break;
                        if(arr[i][j+k]<1||arr[i][j-k]<1||arr[i+k][j]<1||arr[i-k][j]<1){
                            break;
                        }
                            have = 1;
                            arr[i][j+k]--;
                            arr[i][j-k]--;
                            arr[i+k][j]--;
                            arr[i-k][j]--;

                        }
                        if(have==1) {
                        arr[i][j]--;
                        countt++;
                        savei = i;
                        savej = j;
                    }
                }
                /*if(have==1){printf("\n");
                for(int a=0;a<N;a++){
                    for(int b=0;b<M;b++){
                        printf("%d ",arr[a][b]);
                    }
                    printf("\n");
                    }
                }*/
            }
        }
        printf("%d\n%d %d\n",countt,savei,savej);
    }
}
