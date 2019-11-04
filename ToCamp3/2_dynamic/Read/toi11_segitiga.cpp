#include <bits/stdc++.h>
using namespace std;

const int N = 255;

int n, dp[N][N][3];
char inp[N];
int oper[3][3] = {  {2, 1, 0},
                    {2, 1, 1},
                    {1, 2, 1}};

vector<pair<int, int>> op[3];

bool mic(int l, int r, int z) {
    if(dp[l][r][z] != -1) return dp[l][r][z];
    if(l == r) {
        if(inp[l] == z) return dp[l][r][z] = 1;
        else return dp[l][r][z] = 0;
    }
    for(int k = l; k < r; ++k) 
        for(auto x : op[z]) 
            if(mic(l, k, x.first) && mic(k+1, r, x.second)) 
                return dp[l][r][z] = 1;
    return dp[l][r][z] = 0; 
}

void solve() {
    scanf("%d", &n);
    memset(dp, -1, sizeof dp); 
    scanf("%s", inp);
    for(int i = 0; i < n; ++i) inp[i] -= '0';
    puts(mic(0, n-1, 0) == 1 ? "yes" : "no");
}

int main() {
    for(int i = 0; i < 3; ++i) for(int j = 0; j < 3; ++j) 
    op[oper[i][j]].emplace_back(i, j);
    int t = 20;
    while(t--) solve();
}