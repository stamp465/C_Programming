#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[100];       ///fisrt = node    second =  weight
int dis[1000000];
int before[10000000];
int shortten(int node,int endd){
    queue<int> q;
    q.push(node);
    dis[node] = 0;
    while(!q.empty()){
        int go = q.front();
        q.pop();
        //printf("go -> %d\n",go);
        for(int i=0;i<vec[go].size();i++){
            int node2 = vec[go][i].first;
            int weight2 = vec[go][i].second;
            if(dis[go]+weight2 < dis[node2]){
                dis[node2] = dis[go] + weight2;
                before[node2] = go;
                q.push(node2);
            }
        }
    }
}

int main()
{
    int in,x,y,w;
    fill(dis,dis+1000000,INT_MAX);
    cin >> in;
    for(int i=0;i<in;i++){
        cin >> x >> y >> w;
        vec[x].push_back({y,w});
        vec[y].push_back({x,w}); //if undirect graph
    }
    int st,endd;
    cout << "START & ENDD " ; cin >> st >> endd;
    shortten(st,endd);
    vector<int> gogo;
    while(1){
        gogo.push_back(endd);
        if(endd == st) break;
        endd = before[endd];
    }
    cout << "GOGO dis = " << dis[endd] << endl;
    reverse(gogo.begin(),gogo.end());
    for(auto it : gogo){
        cout << it << " " << endl;
    }
}

/*
8
0 3 3
1 3 2
2 3 4
2 1 2
5 1 2
5 2 3
4 2 2
4 5 2
0 4
*/


