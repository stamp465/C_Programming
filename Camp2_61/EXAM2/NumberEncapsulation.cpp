#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N*2-1][N*2-1];
    for(int i=0;i<N*2-1;i++)
    {
        for(int j=0;j<N*2-1;j++)
        {
            if(i<N)    arr[i][j] = N-i;
            if(i>=N)    arr[i][j] = i-N+2;

            if(j<N&&arr[i][j]<N-j)    arr[i][j] = N-j;
            if(j>=N&&arr[i][j]<j-N+2)    arr[i][j] = j-N+2;
        }
    }
    for(int i=0;i<N*2-1;i++)
    {
        for(int j=0;j<N*2-1;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
