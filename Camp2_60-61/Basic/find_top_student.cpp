#include<bits/stdc++.h>
using namespace std;
int maxx=0,savei=0,maxsup[100];
int arr[1000][1000];
int sumforpeo[1000];
int main(){
    int N,M,countt=0;
    cin >> N >> M;


    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin >> arr[i][j];
            sumforpeo[i]+=arr[i][j];
            if(arr[i][j]>maxsup[j]) maxsup[j] = arr[i][j];
            if(sumforpeo[i]>maxx)  {
                maxx = sumforpeo[i];
                savei = i;
            }
        }
    }
    cout << maxx << endl;;
    for(int i=0;i<M;i++){
        if(arr[savei][i]==maxsup[i]){
            countt++;
        }
    }
    cout << countt;
}
