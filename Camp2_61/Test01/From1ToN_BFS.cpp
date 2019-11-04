#include<bits/stdc++.h>
using namespace std;
vector<int> go;
vector<pair<int,int> > vec[100000];
int dis[100000];
int visit[100000];
int before[100000];
int walk(int node,int n){
    for(int i=0;i<100000;i++){
        dis[i] = 1000000;
    }
    queue<int> q;
    q.push(node);
    dis[node] = 0;
    while(!q.empty()){
        int aa = q.front();
        q.pop();
        visit[aa] = 1;
        //cout << aa << endl;
        for(int i=0;i<vec[aa].size();i++){
            if(vec[aa][i].second+dis[aa] < dis[vec[aa][i].first]){
                dis[vec[aa][i].first] = vec[aa][i].second+dis[aa];
                before[vec[aa][i].first] = aa;

                //
            }
            if(visit[vec[aa][i].first]==0){
                q.push(vec[aa][i].first);
            }

        }
        //cout << q.size() << "..." << endl;
        if(q.size()==0)   break;
    }
}


int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int st,en,longg;
        cin >> st >> en >> longg;
        vec[st].push_back({en,longg});
        vec[en].push_back({st,longg});
    }
    walk(1,n);
    if(dis[n]==1000000){
        cout << "-1";
    }
    else{
        //cout << before[5];
        //cout << "2";
        int x = n;
        while(1){
            go.push_back(x);
            if(x==1)    break;
            x = before[x];
        }
        for(int i=go.size()-1;i>=0;i--){
            cout << go[i] << " ";
        }
    }
}
