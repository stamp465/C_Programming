#include<bits/stdc++.h>
using namespace std;
#define N 5
int visit[1000];
int countt=0,sum = 0;;
vector<int> dis(10000,10000000),check;
vector<pair<int,int> > vec[1000];       //first=weight second=node
int before[1000];

void Prim(int node){
    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> >> pq;
    dis[node] = 0;
    pq.push({dis[node],node});
    //visit[node] = 1;
    while(!pq.empty()){
        //cout << "go";
        pair<int,int> q = pq.top();
        pq.pop();
        //countt++;
        //if(countt==N)   return;
        if(visit[q.second]==1)  {
            //check.pop_back();
            continue;
        }
        check.push_back(q.second);
        //printf("%d\n",q.second);
        visit[q.second] = 1;
        sum += dis[q.second];
        for(int i=0;i<vec[q.second].size();i++){
            int v = vec[q.second][i].second, w = vec[q.second][i].first;
            if (visit[v]==0 && w < dis[v]){
                //cout << "go" << v << endl ;
                dis[v] = w;
                //cout << dis[v] << " " << v << endl ;
                pq.push({dis[v],v});
                before[v] = q.second;
            }
        }
        //cout << pq.size() << endl;
    }
}

int main(){
    vec[0].push_back({3,1});
    vec[0].push_back({1,2});
    vec[0].push_back({6,3});
    vec[1].push_back({3,0});
    vec[1].push_back({3,4});
    vec[1].push_back({5,2});
    vec[2].push_back({6,4});
    vec[2].push_back({5,1});
    vec[2].push_back({1,0});
    vec[2].push_back({5,3});
    vec[3].push_back({5,2});
    vec[3].push_back({6,0});
    vec[4].push_back({3,1});
    vec[4].push_back({6,2});
    Prim(4);
    for(int i=1;i<check.size();i++){
        cout << before[check[i]] << " " << check[i] << endl;
    }
    cout << "Weight = ..." << sum << endl;

}
