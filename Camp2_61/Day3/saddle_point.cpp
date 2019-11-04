#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n][m],min1[n],max1[n]={0},min2[m],max2[m]={0};
    for(int i=0;i<m;i++)    min2[i] = 1000000;
    for(int i=0;i<n;i++)    min1[i] = 1000000;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]>max1[i])   max1[i] = arr[i][j];
            if(arr[i][j]<min1[i])   min1[i] = arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            //cout <<  arr[j][i] << " ";
            if(arr[j][i]>max2[i])   max2[i] = arr[j][i];
            if(arr[j][i]<min2[i])   min2[i] = arr[j][i];
        }
        //printf("..%d %d\n",max2[i],min2[i]);
        //cout << endl;
    }
    int check=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            //printf("%d..",arr[i][j]);
            //printf("//...%d\n",min2[j]);
            if(arr[i][j]==max1[i]&&arr[i][j]==min2[j]){
                printf("(%d, %d) = %d\n",i,j,arr[i][j]);
                check=0;
            }
            if(arr[i][j]==min1[i]&&arr[i][j]==max2[j]){
                printf("(%d, %d) = %d\n",i,j,arr[i][j]);
                check=0;
            }
        }
    }
    if(check==1)    cout << "None";
}
