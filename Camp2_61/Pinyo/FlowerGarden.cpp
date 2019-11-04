#include<bits/stdc++.h>
using namespace std;
int x[1000000];
int y[1000000];
int main()
{
    int N,group=0,countt=1;
    cin >> N;
    while(N--){
        int i,j;
        cin >> i >> j;
        i--;    j--;
        if(x[i]==0&&y[j]==0){
            x[i] = countt;
            y[j] = countt;
            countt++;
            group++;
        }
        else if(x[i]==0&&y[j]!=0){
            x[i] = y[j];

        }
        else if(x[i]!=0&&y[j]==0){
            y[j] = x[i];
        }
        else if(x[i]!=0&&y[j]!=0){
            if(x[i]==y[j]){}
            else{
                group--;
            }
        }
    }
    cout << (group+1)/2;
}
