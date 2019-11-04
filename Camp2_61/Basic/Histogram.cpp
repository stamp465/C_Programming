#include<bits/stdc++.h>
using namespace std;
int arr[10];
int main()
{
    int N,M;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int n;
            cin >> n;
            arr[n]++;
        }
    }
    for(int i=0;i<10;i++)
    {
        cout << i << " ";
        for(int j=0;j<arr[i];j++){
            cout << "*";
        }
        cout << endl;
    }
}
