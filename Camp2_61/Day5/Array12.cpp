#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K;
    cin >> N >> K;
    int arr1[N],arr2[N];
    for(int i=0;i<N;i++)    cin >> arr1[i];
    for(int i=0;i<N;i++)    cin >> arr2[i];
    sort(arr1,arr1+N);
    sort(arr2,arr2+N);
    reverse(arr2,arr2+N);
    for(int i=0;i<N;i++)    if(arr1[i]+arr2[i]<K){
        cout << "NO";   return 0;
    }
    cout << "YES";
}
