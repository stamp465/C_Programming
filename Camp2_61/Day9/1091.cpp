#include<bits/stdc++.h>
using namespace std;
vector<int> graph[500000];

int visit[500000],cango[500000];
int maxx = 0;
int go(int node,int nub){
    //cout << node << " " << nub << "***" << endl;
    //visit[node] = 1;
    if(nub>maxx) maxx = nub;
    if(!graph[node].empty()){
        for(int i=0;i<graph[node].size();i++){
            if(visit[graph[node][i]]==0&&graph[node][i]>node){
                //cout << "now = " << node << endl;
                go(graph[node][i],nub+1);
            }
        }
    }

}


int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1;i<N;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        if(x<y) graph[x].push_back(y);
        else    graph[y].push_back(x);
        if(x<y) cango[y] = 1;
        else    cango[x] = 1;
    }
    for(int i=1;i<=N;i++){
        if(!graph[i].empty()&&visit[i]==0&&cango[i]==0){
            int nub = 0;
            go(i,nub);

            //cout << endl;
        }
    }
    cout << maxx+1;

}
/*
8
6 1
1 4
4 6
4 3
3 2
2 5
5 4
*/
