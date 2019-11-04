#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > vec[100];       ///fisrt = node    second =  weight
bool visit[1000000];
int DFS(int node){
    visit[node] = true;
    printf("go -> %d\n",node);
    for(int i=0;i<vec[node].size();i++){
        if(visit[vec[node][i].first]==false){
            DFS(vec[node][i].first);
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
    DFS(st);
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
