#include <bits/stdc++.h>
using namespace std;

int n;
int pre[N];
vector<int> vec;

int main() {
    scanf("%d", &n);
    for(int i = 0, val; i < n; ++i) {
        scanf("%d", &val);
        auto it = lower_bound(vec.begin(), vec.end(), val);
        if(it == vec.end()) vec.emplace_back(val);
        else *it = val;
    }
    printf("%d\n", (int)vec.size());
}