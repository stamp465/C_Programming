#include<bits/stdc++.h>
using namespace std;

int arr[1000][100];

int main()
{
    int N,maxhigh=0,maxend=0;
    cin >> N;
    while(N--)
    {
        int start,high;
        cin >> start >> high;
        if(high>maxhigh)    maxhigh = high;
        if(start+high*2-1>maxend)   maxend = start+high*2-1;
        int sa=high;
        for(int i=1;i<=high;i++)
        {
            for(int j=start;j<=start+2*sa-1;j++)
            {
                if(j==start){
                    if(arr[i][j]==3)    arr[i][j] = 4;
                    else if(arr[i][j]!=2)    arr[i][j] = 1;
                }
                else if(j==start+2*sa-1){
                    if(arr[i][j]==1)    arr[i][j] = 4;
                    else if(arr[i][j]!=2)    arr[i][j] = 3;
                }
                else{
                    arr[i][j] = 2;
                }
            }
            start++;
            sa--;
        }
    }
    for(int i=maxhigh;i>=1;i--)
    {
        for(int j=1;j<=maxend;j++)
        {
            //cout << arr[i][j];
            if(arr[i][j]==0)    printf ("%s", ".");
            if(arr[i][j]==1)    printf ("%s", "/");
            if(arr[i][j]==2)    printf ("%s", "X");
            if(arr[i][j]==3)    printf ("%s", "\\");
            if(arr[i][j]==4)    printf ("%s", "v");
        }
        cout << endl;
    }
}
