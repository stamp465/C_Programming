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
        }
    }
    int t,roll,col,x,y;
    cin >> t;
    for(int k=1;k<=t;k++)
    {
        count =0;
        cin >> roll >> col >> x >> y;
        x-=1;
        y-=1;
        for(int i=x-roll/2;i<=x+roll/2;i++)
            {
                for(int j=y-col/2;j<=y+col/2;j++)
                {
                    //cout << i << " " << j << " " << arr[i][j] << endl;
                    if(arr[i][j]==1)
                        count ++;
                }
            }
        cout << count << endl;
    }
}
