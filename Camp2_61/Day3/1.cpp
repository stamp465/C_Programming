#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n%2==0)
    {
        cout << "Invalid N";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==i)    cout << "*";
            else if(j==n-i-1) cout << "*";
            else        cout << " ";
        }
        cout << endl;
    }

}
