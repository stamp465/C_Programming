#include<bits/stdc++.h>
using namespace std;
class krus{
public :
    int st;
    int en;
    int weigh;
    krus(int st,int en,int weigh){
        this->st = st;
        this-> en = en;
        this-> weigh = weigh;
    };

};
bool kruscompare(krus &a, krus &b) { return a.weigh < b.weigh; }

vector<krus> g;
vector<int> gotog[10000],check;
int visit[10000];
int dis[10000];
int before[1000];

void Kruskal()
{

}

int main()
{
    int N;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        int st,en,weigh;
        cin >> st >> en >> weigh;
        g.push_back(krus(st,en,weigh));
        g.push_back(krus(en,st,weigh));
    }
    sort(g.begin(),g.end(),kruscompare);
    //int star,endd;
    //cin >> star >> endd;
    //cout << dis[endd] << endl;
    int sum = 0;



}
/*
7
4 1 3
4 2 6
1 0 3
1 2 5
2 0 1
2 3 5
0 3 6

*/

