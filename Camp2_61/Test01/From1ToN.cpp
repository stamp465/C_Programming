#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[100000];
int canvisit[100000];
int visit[100000];
int visit2[100000];
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

int go(int node,int n){
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int g = q.front();
        visit2[g] = 1;
        q.pop();
        printf("%d ",g);
        if(g==n)    break;
        for(int i=0;i<vec[g].size();i++){
                int savei;
                //cout << vec[g][i].first << "..";
            if(visit2[vec[g][i].first]==0){
                if(q.empty())  {
                    q.push(vec[g][i].first);
                    savei = i;
                    //cout << q.back() << "**" << endl;
                }
                else{
                    if(vec[g][i].second < vec[g][savei].second){
                        //cout << q.back() << endl;
                        q.pop();
                        q.push(vec[g][i].first);
                        savei = i;
                    }
                }
            }
        }
        //cout << " " << q.size() << endl;
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
        go(1,n);
    }
}
