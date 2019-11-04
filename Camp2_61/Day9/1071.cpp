#include<bits/stdc++.h>
using namespace std;
//typedef pair<int, int> pairs;
int main()
{
    vector<pair<int,int> > vec;
    int N,M;
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        int u,t;
        scanf("%d %d",&u,&t);
        //scanf("%d %d",&vec[i].first,&vec[i].second);
        vec.push_back(make_pair(u,t));
    }
    for(int o=0;o<M;o++){
        int x,y,boom,countt=0;
        scanf("%d %d %d",&x,&y,&boom);
        int stx,sty,enx,eny;
        stx = x-boom;
        //if(stx<0)   stx = 0;
        enx = x+boom;
        //if(enx>1000)    enx = 1000;
        sty = y-boom;
        //if(sty<0)   sty = 0;
        eny = y+boom;
        //if(eny>1000)    eny = 1000;
        /*for(int i=0;i<vec.size();i++){
            cout << i << "...";
            cout << vec[i].first << " " << vec[i].second << endl;
        }*/
        for(int i=0;i<N;i++){
            //cout << i;
            //cout << "gg";
            //cout << "..." << vec[i].first << " " << vec[i].second << endl;
            if(vec[i].first>=stx&&vec[i].first<=enx&&vec[i].second>=sty&&vec[i].second<=eny){
                //cout << "gogo..." << vec[i].first << " " << vec[i].second << endl;
                countt++;
                vec[i].first = vec[N-1].first;
                vec[i].second = vec[N-1].second;
                vec[N-1].first = -1;
                vec[N-1].second = -1;
                N--;
                i--;
            }
        }
        printf("%d\n",countt);
    }
}
