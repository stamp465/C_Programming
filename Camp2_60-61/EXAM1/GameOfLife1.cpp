#include<iostream>

using namespace std;
int arr[1000][1000];
int main()
{
    int m,n,count =0;
    cin >> m >> n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==1)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1)
            {
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
}
