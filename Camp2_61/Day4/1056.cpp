#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin >> n >> m;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    while(vec.size()>m){
        sum += vec.back();
        int ch=m;
        while(ch--)
        {
            vec.pop_back();
        }
    }
    sum += vec.back();
    cout << sum;
}
