#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    for(int i=0;i<3;i++)
    while(1)
    {
        int b;  cin >> b;
        if(b==-9999)    break;
        a.push_back(b);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
}
