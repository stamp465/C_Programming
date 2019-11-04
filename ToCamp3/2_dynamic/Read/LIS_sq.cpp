#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;

int n, A[N], dp[N], pre[N];

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        scanf("%d", &A[i]);
        for(int j = 1; j < i; ++j) {
            if(A[j] < A[i] && dp[i] < dp[j]) {
                dp[i] = dp[j];
                pre[i] = j;
            } 
        }
        dp[i]++;
    }
    stack<int> stk;
    stk.emplace(max_element(dp, dp+N) - dp);
    while(stk.top() != 0) 
        stk.emplace(pre[stk.top()]);
    stk.pop();
    printf("%d\n", (int)stk.size());
    while(!stk.empty()) 
        printf("%d ", A[stk.top()]), stk.pop();
}
