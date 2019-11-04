#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int n, dp[N];

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        scanf("%d", &dp[i]);
        dp[i] += max(0, dp[i-1]);
    }
    printf("%d\n", *max_element(dp, dp+N));
}