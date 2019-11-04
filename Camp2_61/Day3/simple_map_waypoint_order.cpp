#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    int arr[m][n] ;
    int N;
    cin >> N;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    for(int i=0;i<N;i++)
    {
        int a,b;
        cin >> a >> b;
        arr[a-1][b-1] = i+1;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
