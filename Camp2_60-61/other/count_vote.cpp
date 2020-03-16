#include<bits/stdc++.h>
using namespace std;
int arr[101],maxx=0,savei;
int main()
{
    int N,K;
    cin >> N >> K;
    while(K--){
        int a;
        cin >> a;
        arr[a]++;
        if(arr[a]>maxx){
            maxx = arr[a];
            savei=a;
        }
    }
    printf("%d\n%d",savei,maxx);
}
