#include<bits/stdc++.h>
using namespace std;
vector<int> graph[100000];
int power[100000];
int cut[100000];

int BFS(int node){
    //int visit[100000]={0};
    int super = 0;
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int g = q.front();
        q.pop();
        //cout << g << "...";
        super += power[g];
        for(int i=0;i<graph[g].size();i++){
                //cout << "check " << visit[graph[g][i]] << endl;
            if(cut[graph[g][i]]==0 ){
                q.push(graph[g][i]);
            }
        }
    }
    return super;
}

int CUTT(int node){
    //int visit[100000]={0};
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int g = q.front();
        cut[g] = 1;
        q.pop();
        for(int i=0;i<graph[g].size();i++){
                //cout << "check " << visit[graph[g][i]] << endl;
            if(cut[graph[g][i]]==0){
                q.push(graph[g][i]);
            }
        }
    }

}

int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    for(int i=1;i<=N;i++){
        int ipower,go1,go2;
        scanf("%d %d %d",&ipower,&go1,&go2);
        power[i] = ipower;
        if(go1!=0)  graph[i].push_back(go1);
        if(go2!=0)  graph[i].push_back(go2);
    }
    for(int j=1;j<=K;j++){
        string a;
        int num;
        cin >> a;
        scanf("%d",&num);
        if(a[0]=='a'){
            if(cut[num]==0){
                printf("%d\n",BFS(num));
            }
            else{
                printf("0\n");
            }
        }
        else if(a[0]=='d'){
            CUTT(num);
        }
    }
}
