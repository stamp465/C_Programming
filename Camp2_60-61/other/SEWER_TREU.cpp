#include<bits/stdc++.h>
using namespace std;
int ans[100000];
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    pair<int,int> sww[M];
    for(int i=1;i<=N;i++){
        ans[i] = i;
    }
    for(int i=0;i<M;i++){
        scanf("%d %d",&sww[i].second,&sww[i].first);
    }
    sort(sww,sww+M);
    //reverse(sww,sww+M);
    for(int i=0;i<M;i++){
        //cout << sww[i].second << " " << sww[i].second+1 << endl;
        //cout << ans[sww[i].second] << " " << ans[sww[i].second+1] << endl;
        swap(ans[sww[i].second],ans[sww[i].second+1]);
        //printf("...%d %d\n",ans[sww[i].second],ans[sww[i].second+1]);
    }
    for(int i=1;i<=N;i++){
        printf("%d\n",ans[i]);
    }
}
