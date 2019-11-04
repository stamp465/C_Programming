#include <stdio.h>

const int N = 1e3+5;

int n, m, dp[N][N];

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            scanf("%d", &dp[i][j]);
            dp[i][j] += dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
        }
    }
    scanf("%d", &m);
    for(int i = 1, x1, y1, x2, y2; i <= m; ++i) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("%d\n", dp[x2][y2] - dp[x1-1][y1] - dp[x2][y1-1] + dp[x1-1][y1-1]);
    }
}