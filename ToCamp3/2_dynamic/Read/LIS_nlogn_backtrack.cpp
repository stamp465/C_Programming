#include <bits/stdc++.h>
#define pii pair<int, int>
#define x first
#define y second
using namespace std;

const int N = 1e5+5;

int n, pre[N];
vector<pii> vec; // val, pos

int main() {
    scanf("%d", &n);
    for(int i = 1, val; i <= n; ++i) {
        scanf("%d", &val);
        auto it = lower_bound(vec.begin(), vec.end(), pii(val, 0));
        if(it == vec.end()) vec.emplace_back(val, i);
        else *it = pii(val, i);
        if(it != vec.begin()) {
            --it;
            pre[i] = it->y;
        }
    }
    stack<int> stk;
    stk.emplace(vec.rbegin()->y);
    while(stk.top() != 0) 
        stk.emplace(pre[stk.top()]);
    stk.pop();
    printf("%d\n", (int)stk.size());
    while(!stk.empty()) 
        printf("%d ", stk.top()), stk.pop();
}