#include<bits/stdc++.h>
using namespace std;
int arr[100][100],ch[100][100];
int x1[4] = {0,0,1,-1};
int x2[4] = {1,-1,0,0};
int maxx=0;
bool check(int M,int i,int j,int m,int n)
{
    if(i<0||i>=M||j<0||j>=M||arr[i][j]==100||arr[m][n]>=arr[i][j])    return false;
    return true;
}
int walk(int M,int i,int j)
{
    //cout << i << " " << j << " " << arr[i][j] << endl;
    if(arr[i][j]>maxx)  maxx = arr[i][j];
    if(check(M,i+1,j,i,j))  walk(M,i+1,j);
    if(check(M,i-1,j,i,j))  walk(M,i-1,j);
    if(check(M,i,j+1,i,j))  walk(M,i,j+1);
    if(check(M,i,j-1,i,j))  walk(M,i,j-1);
    arr[i][j] = 100;

}
int main()
{
    int M;
    cin>> M;
    int x,y;
    cin >> x >> y;
    swap(x,y);
    for(int i=0;i<M;i++)
        for(int j=0;j<M;j++){
            cin >> arr[i][j];
        }
    //ch[x-1][y-1] = 2;
    walk(M,x-1,y-1);
    cout << maxx;
}

