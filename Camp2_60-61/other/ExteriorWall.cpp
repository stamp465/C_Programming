#include<bits/stdc++.h>
using namespace std;
char arr[200][200];
int floodfill(int i,int j){
    arr[i][j] = '+';
    if(arr[i+1][j]=='.')  floodfill(i+1,j);
    if(arr[i-1][j]=='.')  floodfill(i-1,j);
    if(arr[i][j+1]=='.')  floodfill(i,j+1);
    if(arr[i][j-1]=='.')  floodfill(i,j-1);
}


int main()
{
    while(1){
    int N,M,countt=0;
    cin >> N >> M;
    if(N==0&&M==0)  break;
    for(int i=0;i<N;i++){
        scanf("%s",arr[i]);
    }
    floodfill(0,0);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr[i][j]=='H'){
                if(arr[i+1][j]=='+') {
                    countt++;
                    //arr[i+1][j] = 'X';
                }
                if(arr[i-1][j]=='+')  {
                    countt++;
                    //arr[i-1][j] = 'X';
                }
                if(arr[i][j+1]=='+')  {
                    countt++;
                    //arr[i][j+1] = 'X';
                }
                if(arr[i][j-1]=='+')  {
                    countt++;
                    //arr[i][j-1] = 'X';
                }
            }
        }

    }

    cout << countt << endl;


    }
}
