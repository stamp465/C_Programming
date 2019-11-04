#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
        arr[i]--;
    }
    getline(cin,a);
    getline(cin,a);
    int s=a.size()/N;
    s++;
    while(a.size()!=s*N){
        a.push_back(' ');
    }
    for(int i=0;i<s*N;i++)
    {
        b.push_back(a[arr[i%N]+(i/N)*N]);
    }
    cout << b;
}
