#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int> > pq;
int arr[600000];
int dismin[600000];
int main()
{
    int N,K;
    cin >> N >> K;
    for(int i=1;i<=N;i++)
    {
        cin >> arr[i];
    }
    pq.push({-arr[1],1});
    //dismin[1] = 1;
    for(int i=2;i<=N;i++)
    {
        while(i-pq.top().second  > K){
            pq.pop();
        }
        dismin[i] = arr[i]+(-pq.top().first);
        pq.push({-dismin[i],i});
    }
    cout << dismin[N];
}
