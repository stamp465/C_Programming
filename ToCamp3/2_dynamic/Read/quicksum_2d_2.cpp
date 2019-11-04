#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int N = 3e2+5;

int ans = -INF;
int n, m, dp[N], qs[N][N];

int main() {
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; ++i) for(int j = 1; j <= m; ++j)
        scanf("%d", &qs[i][j]), qs[i][j] += qs[i-1][j];
    for(int i = 1; i <= n; ++i) for(int j = i; j <= n; ++j) {
        for(int k = 1; k <= m; ++k) {
            dp[k] = max(dp[k-1], 0) + qs[j][k] - qs[i-1][k];
            ans = max(ans, dp[k]);
        }
    }
    printf("%d\n", ans);
}
