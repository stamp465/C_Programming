#include<bits/stdc++.h>
using namespace std;
int pa(string a)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=a[a.size()-1-i])  {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string a;
    cin >> a;
    cout << pa(a);
}


