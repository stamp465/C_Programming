#include <bits/stdc++.h>
using namespace std;
int x[17];
int y[17];
int dp[131072][17];
int d[17][17];
int main(){
    scanf("%d%d",x,y);
    int n;
    scanf("%d",&n);
    if(n == 0){
        printf("0\n");
        return 0;
    }
    for(int i = 1; i <= n; i++){
        scanf("%d%d",x+i,y+i);
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            d[i][j] = abs(x[i]-x[j]) + abs(y[i]-y[j]);
        }
    }
    for(int bit = 0; bit < 131072; bit++){
        for(int i = 0; i < 17; i++){
            dp[bit][i] = 1e9;
        }
    }
    n++;
    dp[1][0] = 0;
    for(int bit = 1; bit < (1 << n); bit++){
        for(int cur = 0; cur < n; cur++){
            if(bit & (1 << cur)) {
                for (int nxt = 0; nxt < n; nxt++) {
                    if(bit & (1 << nxt)) continue;
                    dp[bit | (1 << nxt)][nxt] = min(dp[bit | (1 << nxt)][nxt], dp[bit][cur] + d[cur][nxt]);
                }
            }
        }
    }
    int mn = 1e9;
    for(int i = 1; i < n; i++){
        mn = min(mn,dp[(1 << n)-1][i] + d[i][0]);
    }
    printf("%d\n",mn);
    return 0;
}
