#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[100];       ///fisrt = node    second =  weight
bool visit[1000000];
int BFS(int node){
    visit[node] = true;
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int go = q.front();
        q.pop();
        printf("go -> %d\n",go);
        for(int i=0;i<vec[go].size();i++){
            if(visit[vec[go][i].first]==false){
                visit[vec[go][i].first] = true;
                q.push(vec[go][i].first);
            }
        }
    }
}

int main()
{
    int in,x,y,w;
    cin >> in;
    for(int i=0;i<in;i++){
        cin >> x >> y >> w;
        vec[x].push_back({y,w});
        //vec[y].push_back({x,w}); //if undirect graph
    }
    int st;
    cout << "START " ; cin >> st;
    BFS(st);
}

/*
9
0 1 1
1 3 1
3 2 1
2 1 1
3 4 1
4 5 1
5 7 1
7 6 1
6 4 1
0
*/

