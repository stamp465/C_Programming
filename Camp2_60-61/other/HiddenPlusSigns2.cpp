#include<bits/stdc++.h>
using namespace std;
int A[1000][1000];
int B[1000][1000];
int main(){
    int t; cin >> t;
    while(t--){
        int ans = 0;
        int y=0;
        int x=0;
        int m,n; cin >>  m >> n;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++) {
                    cin >> A[i][j];
                    B[i][j] = A[i][j];
            }
           // B[i][j] = A[i][j];

        }

        for(int i=2;i<m;i++){
            for(int j=2;j<n;j++){
                if(A[i][j]==1 && A[i-1][j]>0 && A[i+1][j]>0 && A[i][j-1]>0 &&  A[i][j+1]>0 && B[i][j]==1) {
                    ans++; --A[i][j]; --A[i-1][j]; --A[i+1][j]; --A[i][j-1]; --A[i][j+1];
                    for(int a = 2;a<=5;a++){
                        if(i-a<1 || i+a>m || j-a<1 || j+a>n) break ;
                        if(A[i-a][j]<=0 || A[i+a][j]<=0 || A[i][j-a]<=0 || A[i][j+a]<=0) break;
                        --A[i-a][j]; --A[i+a][j]; --A[i][j-a]; --A[i][j+a];
                    }

                    y = i; x = j;
                    //cout << i << " " << j << endl;
                }
            }

        }
        printf("%d\n%d %d\n",ans,y,x);
        /*for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++) cout << A[i][j] << " ";
            cout << endl;

        }*/
    }
}
