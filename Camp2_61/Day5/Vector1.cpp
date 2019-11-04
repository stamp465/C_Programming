#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a[3],c;
    for(int i=0;i<3;i++)
    while(1)
    {
        int b;  cin >> b;
        if(b==-9999)    break;
        a[i].push_back(b);
        c.push_back(b);
    }
    for(int i=0;i<3;i++)
        sort(a[i].begin(),a[i].end());
    //reverse(a.begin(),a.end());
    sort(c.begin(),c.end());
    reverse(c.begin(),c.end());
    for(int j=0;j<3;j++){
        for(int i=0;i<a[j].size();i++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    for(int i=0;i<c.size();i++)
        {
            cout << c[i] << " ";
        }
}

