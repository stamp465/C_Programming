#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    vector<char> b;
    vector<char>::iterator it;
    for(int i=0;i<a.size();i++)
    {
        it = find(b.begin(),b.end(),a[i]);
        if(it!=b.end()) break;
        else    b.push_back(a[i]);
    }
    for(int i=0;i<b.size();i++) cout << b[i];
}
