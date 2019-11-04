#include<bits/stdc++.h>
using namespace std;
int arr[1001][1001];
int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    int want,maxx=0;
    scanf("%d",&want);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++){
            scanf("%d",&arr[i][j]);
            arr[i][j] += arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1];
            if(i>=want&&j>=want){
                maxx = max(maxx,arr[i][j]-arr[i-want][j]-arr[i][j-want]+arr[i-want][j-want]);
            }
        }
    }
    printf("%d\n",maxx);
}
