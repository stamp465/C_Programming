#include <bits/stdc++.h>
using namespace std;
int g[101][101];
int way[101];
int add(int a,int b,int w){
    g[a][b] = g[b][a] = w;
}

int dj(int n){
    int vis[n+1]={0};
    int dis[n+1]={0};
    int w=0;
    queue <int> q;
    q.push(1);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        vis[x]=1;
        for(int i = 1;i<=n;i++){
            if(g[x][i]>0  && i!=x){
                if(dis[i]==0 || dis[i] > g[x][i]+dis[x] ){
                        dis[i] = g[x][i]+dis[x];
                        way[i] = x;
                        //cout << x << " to " << i <<endl;
                }
                //cout<< x << " to " << i << " : " << g[x][i]<<endl;
                if(vis[i]==0) q.push(i);
            }
        }

    }
    return dis[n];
}


int main(){

    int n,m,a,b,w;
    scanf("%d %d",&n,&m);
    for(int i = 0;i<m;i++){
        scanf("%d %d %d",&a,&b,&w);
        add(a,b,w);
    }
    if(dj(n)==0){
        cout << -1;
    }
    else{
        vector<int>v;
        int x = n;
        while(1){
            v.push_back(x);
            if(x==1) break;
            x = way[x];
        }
        reverse(v.begin(),v.end());
        for(int i =0;i<v.size();i++) printf("%d ",v[i]);

    }


}
