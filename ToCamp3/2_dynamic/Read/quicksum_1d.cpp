#include <stdio.h>

const int N = 1e5+5;

int n, m, dp[N];

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) scanf("%d", &dp[i]), dp[i] += dp[i-1];
    scanf("%d", &m);
    for(int i = 1, l, r; i <= m; ++i) {
        scanf("%d %d", &l, &r);
        printf("%d\n", dp[r] - dp[l-1]);
    }
}