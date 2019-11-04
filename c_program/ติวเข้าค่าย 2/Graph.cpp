#include<bits/stdc++.h>
using namespace std;

bool visited[100];

int main()
{
    //adjacency matrix
    int g1[100][100] = {0};
    g1[1][2] = 1;
    g1[4][3] = 1;

    //adjacency list
    vector<int> g2[100];
    g2[1].push_back(2);
    g2[2].push_back(1);     //undirect
    g2[4].push_back(3);
    g2[3].push_back(4);     //undirect

    //edge list
    vector< pair<int,int> > g3;
    g3.push_back(make_pair(1,2));
    g3.push_back(make_pair(2,1));       //undirect
    g3.push_back(make_pair(3,4));
    g3.push_back(make_pair(4,3));       //undirect


}
