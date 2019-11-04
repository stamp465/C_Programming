#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[100000];
vector<int> vecsave;
int canvisit[100000];
int visit[100000];
int dis=10000000;
bool connect(int node,int n){
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        //cout << "why";
        int g = q.front();
        q.pop();
        visit[g] = 1;
        canvisit[g] = 1;
        //cout << g << ".....";
        for(int i=0;i<vec[g].size();i++){
                //cout << vec[g][i].first << " ";
            if(visit[vec[g][i].first]==0){
                q.push(vec[g][i].first);
                //cout << q.back() << endl;
            }
        }

    }
    //printf("%d\n",canvisit[n]);
    if(canvisit[n]==0)  return false;
    return true;

}

int go(int node,int n,vector<int> vecgo,int visited[],int distancee){
    vecgo.push_back(node);
    int visited2[10005];
    for(int i=0;i<10005;i++){
        visited2[i] = visited[i];
    }
    visited2[node] = 1;
    if(node==n){
        if(distancee<dis){
            dis = distancee;
            vecsave = vecgo;
        }
        else if(distancee==dis){
            if(vecgo.size()<vecsave.size())
            {
                vecsave = vecgo;
            }

        }
    }
    else{
        for(int i=0;i<vec[node].size();i++){
            //cout << node << " go " << vec[node][i].first << " " << visited2[vec[node][i].first] << endl;
            if(visited2[vec[node][i].first]==0){

                go(vec[node][i].first,n,vecgo,visited2,distancee+vec[node][i].second);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);   cin.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int st,en,longg;
        cin >> st >> en >> longg;
        vec[st].push_back({en,longg});
        vec[en].push_back({st,longg});
        //printf("%d %d %d %d\n",st,en,vec[st].back().first,vec[en].back().first);
    }
    if(connect(1,n)==false){
         printf("-1\n");
    }
    else{
        vector<int> start;
        int visited[10005] = {0};
        go(1,n,start,visited,0);
        for(int i=0;i<vecsave.size();i++){
            cout << vecsave[i] << " ";
        }
    }
}

