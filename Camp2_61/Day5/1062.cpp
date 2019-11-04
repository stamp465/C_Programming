#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin >> N >> M;
    string key1,key2,want,ans;
    cin >> key1 >> key2 >> want;
    while(want.size()!=0)
    {
        for(int i=0;i<N;i++)
        {
            string a;
            a.push_back(key1[i]);
            a.push_back(key2[i]);
            a.push_back(want[want.size()-1]);
            sort(a.begin(),a.end());
            //cout << a;
            //ans.push_back(a[1]);
            want[want.size()-1] = a[1];
        }
        ans.push_back(want[want.size()-1]);
        want.pop_back();
    }
    reverse(ans.begin(),ans.end());
    cout << ans;
}
