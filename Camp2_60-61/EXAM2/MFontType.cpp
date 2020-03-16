#include<bits/stdc++.h>
using namespace std;
char arr1[50][50];
char arr2[50][50];
int main()
{
    int N;
    cin >> N;
    int M=N;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(j==M-1-i){
                arr1[i][j] = '/';
            }
        }
        for(int j=0;j<M;j++){
            if(j==i){
                arr2[i][j] = '\\';
            }
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr1[i][j]=='/'||arr1[i][j]=='\\')  cout << arr1[i][j];
            else    cout << " ";
        }
        for(int j=0;j<M;j++){
            if(arr2[i][j]=='/'||arr2[i][j]=='\\')  cout << arr2[i][j];
            else    cout << " ";
        }
        for(int j=0;j<M;j++){
            if(arr1[i][j]=='/'||arr1[i][j]=='\\')  cout << arr1[i][j];
            else    cout << " ";
        }
        for(int j=0;j<M;j++){
            if(arr2[i][j]=='/'||arr2[i][j]=='\\')  cout << arr2[i][j];
            else    cout << " ";
        }
        cout << endl;
    }
}
