#include<bits/stdc++.h>
using namespace std;
int sum[1000];
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }
    int start = N/2,endd = N/2,a=0;
    while(start!=-1){
        for(int i=start;i<=endd;i++){
            for(int j=start;j<=endd;j++){
                sum[a] += arr[i][j];
            }
        }
        int n = a;
        while(n>0){
            n--;
            sum[a] -= sum[n];
        }
        cout << sum[a] << endl;
        start--;
        endd++;
        a++;
    }
}
